#include "Compteepargne.h"
#include<assert.h>

Bank::Compteepargne::Compteepargne(client* c, Devise* d, double t)
    :Compte(c ,d )
{
    assert(t > 0 && t < 100); 
    this->tauxinterets = t;
}

void Bank::Compteepargne::calculinteret()
{
    this->ajoutinteret(this->tauxinterets);
}

bool Bank::Compteepargne::retirerargent(Devise* montant)
{
    assert(this->checkmontant(montant));
        return this->retirerargent(montant);
  
}
