#include "Devise.h"
using namespace std;
std::Devise::Devise(double val, string s)
{
	this->valeur = val;
	this->symbole = s; 
}

void std::Devise::afficher() const
{
	cout << this->valeur << this->symbole << endl; 
}

Devise std::Devise::operator-(Devise& d)
{
	Devise RES(this->valeur - d.valeur);
	return RES;
}

Devise std::Devise::operator+(Devise& d)
{
	Devise RES(this->valeur +d.valeur);
	return RES;
}

Devise std::Devise::operator*(double d)
{
	Devise RES(this->valeur * d);
		return RES;
}

bool std::Devise::operator<=(Devise& d)
{
	return this->valeur <= d.valeur;
	
}

Devise std::Devise::operator/(int i)
{
	Devise res(0);
	assert(i != 0);
	this->valeur / i; 
	return res;
}

Devise std::Devise::operator+(double d)
{
	Devise RES(this->valeur + d);
	return RES;
	
}

std::Devise::~Devise()
{
	cout << "destructeur de la classe devise ";
}
