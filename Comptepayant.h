#pragma once
#include "Compte.h"
using namespace std;
namespace Bank {
    class Comptepayant :
        public virtual Compte
    {
    private:
        double p;
    public: 
        Comptepayant(client* c, Devise* solde,double p);
        bool retirerargent  (Devise* montant)override;
        bool transfereargent(Devise* montant, Compte* C)override;

    };
};

