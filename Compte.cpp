#include "Compte.h"
#include"client.h"
#include"Devise.h"
using namespace std; 
 int Bank::Compte::cpt = 0;
 Bank::Compte::Compte(client* C, Devise* D)
    :numc(cpt)
{
    this->cpt++;
    this->c = c; 
    this->solde = D;
    this->OP = vector<Operation>();

}

void Bank::Compte::afficher() const
{
    cout <<"le compte "<< this->numc << endl;
    cout << "solde est ";
    this->solde->Devise::afficher();
    cout << "le client est : ";
    this->c->client::afficher();
}

void Bank::Compte::deposeraregnt( Devise* montant)
{
 
    *(this->solde) = *(this->solde) + *(montant);
    Operation O(montant, "+");
        this->OP.push_back(O);
}

bool Bank::Compte::retirerargent(Devise* montant)
{
    if (*(montant) <= *(this->solde)) {

        *(this->solde) = *(this->solde) - *(montant);
        return true;
        Operation O(montant, "-");
            this->OP.push_back(O);
    }
    return false; 
}

bool Bank::Compte::transfereargent(Devise* montant, Compte* C)
{
    if (this->retirerargent(montant)) {
        C->deposeraregnt(montant);
        return true;
    }
    return false;
}



void Bank::Compte::ajoutinteret(double interet)
{
    Devise d(*(this->solde) * (interet / 100));
    *(this->solde) = *(this->solde) + d ;
}

bool Bank::Compte::checkmontant(Devise* montant) const
{
    Devise Rap(*(this->solde) / 2);
    return *(montant) <=Rap; 
   
}

bool Bank::Compte::checkdecouvert(Devise* montant, Devise* decouvert)
{
    return*(this->solde) - *montant <= *(decouvert);

  
}

bool Bank::Compte::retirerargentpayant(Devise* montant, float p)
{
    Devise D(*(montant)*p);
    if(*(montant)+D<=*(this->solde)) {
        *(this->solde) = *(this->solde) -*(montant)- D;
            return true ; 
     }
   return false;
}

Bank::Compte::~Compte()
{
    this->OP.clear();
    cout << "destructeur de classe Compte";
}
