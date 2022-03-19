#include "Compteepargnepayant.h"

Bank::Compteepargnepayant::Compteepargnepayant(client* C, Devise* solde, double tauxint,double T)
	:Compte(C,solde),Comptepayant(C,solde,T),Compteepargne(C,solde,tauxint)
{

}
