#pragma once
#include "Compte.h"
namespace Bank {
    class Comptecourant :
        public Compte
    {
    private : 

        Devise* decouvert; 
    public:
        Comptecourant(client* c, Devise* s, Devise* decouvert=0); 
        bool retirerargent(Devise* montant) override; 

    };
};

