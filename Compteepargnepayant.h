#pragma once
#include "Comptepayant.h"
#include "Compteepargne.h"
#include "Devise.h"
#include "client.h"
namespace Bank {
    class Compteepargnepayant :
        public Comptepayant, public Compteepargne
    {
    public:
        Compteepargnepayant(client* C, Devise* solde , double tauxint, double T  );
    };
}
