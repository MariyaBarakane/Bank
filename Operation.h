#pragma once
#include<iostream>
class Devise;
using namespace std;
namespace Bank {
	class Operation
	{
	private:
		int static cpt;
		int num;
		Devise* montant;
		string lib;
	public : 
		Operation(Devise* d, string l);
		void afficher();
		~Operation();
	};
};

