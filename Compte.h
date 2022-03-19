#pragma once
#include"client.h"
#include"Devise.h"
#include <vector>
using namespace std;
namespace Bank {
	class Operation;
	class Compte
	{
	private:
		client* c;
		Devise* solde;
		const int numc;
		static int cpt;
		vector<Operation> OP;
	public:
		Compte(client* C , Devise* D );
		void afficher() const;
		virtual void deposeraregnt( Devise* montant); 
		virtual bool retirerargent( Devise* montant); 
		virtual bool transfereargent( Devise* montant, Compte* C); 
		void ajoutinteret(double interet);
		bool checkmontant(Devise* montant)const; 
		bool checkdecouvert(Devise* montant, Devise* decouvert);
		bool retirerargentpayant(Devise* montant, float p);
		~Compte();





	};
};

