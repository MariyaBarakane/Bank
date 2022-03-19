#include "client.h"
using namespace Bank;
std::client::client(string nom, string prenom, string adresse)
{
	this->nom = nom; 
	this->adresse = adresse; 
	this->prenom = prenom;
	this->comp = vector<Compte*>();
}

void std::client::afficher() const
{
	cout << this->nom << this->prenom << this->adresse << endl;
}

void std::client::addcompte(Compte* C)
{
		this->comp.push_back(C);
	
}

std::client::~client()
{ 
	this->comp.clear();
	cout << "destructeur classe client";
}
