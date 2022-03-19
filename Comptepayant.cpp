#include "Comptepayant.h"
using namespace std; 

Bank::Comptepayant::Comptepayant(client* c, Devise* solde,double p)
    :Compte(c,solde)
{
    this->p = p;
}


bool Bank::Comptepayant::retirerargent(Devise* montant)
{
    Devise D(*montant + *montant * this->p);
        return this->Compte::retirerargent(&D);
          

  
}

bool Bank::Comptepayant::transfereargent(Devise* montant, Compte* C)
{
    if (this->retirerargent(montant)) {
        C->deposeraregnt(montant);
        return true;
}
    return false;
}
