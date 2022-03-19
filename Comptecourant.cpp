#include "Comptecourant.h"
#include<assert.h>
Bank::Comptecourant::Comptecourant(client* c, Devise* s, Devise* decouvert)
    :Compte(c , s)
{
    this->decouvert = decouvert;
}

bool Bank::Comptecourant::retirerargent(Devise* montant)
{
    assert(this->checkdecouvert(montant, this->decouvert));
    return this->retirerargent(montant);
}
