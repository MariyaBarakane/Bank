#include "Operation.h"

int Bank::Operation::cpt = 0;
Bank::Operation::Operation(Devise* d, string l)
	:num(cpt++)
{
	this->montant = d; 
	this->lib = l; 
}

void Bank::Operation::afficher()
{
	cout << "n°:" << this->num<<"||" << this->lib;
     this->montant.afficher();

}

Bank::Operation::~Operation()
{
	cout << "destructeur de operation";
}
