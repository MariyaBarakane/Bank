#pragma once
#include "Compte.h"
using namespace std;
namespace Bank {
class Compteepargne :
    public virtual Compte
{
private:
    double tauxinterets;
public : 
    Compteepargne(client* c, Devise* d, double t);
    void calculinteret();
    bool retirerargent(Devise* montant) override; 


}; };

