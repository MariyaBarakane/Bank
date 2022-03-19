#pragma once
#include <iostream>
#include<vector>
namespace Bank {
	class Compte; //pre-declaration 
	class client
	{
	private:
		string nom;
		string prenom;
		string adresse;
		vector<Compte*> comp; 

	public :
		client(string nom = " ", string prenom = " ", string adresse = " "); 
		void afficher()const;
		void addcompte( Compte* C);
		~client(); 
	};
};

