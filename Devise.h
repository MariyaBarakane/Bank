#pragma once
#include<iostream>
#include<assert.h>
namespace std {
	class Devise
	{
	private:
		double valeur;
		string symbole;
	public : 
		Devise(double val = 0.0,string s = " "); 
		void afficher()const; 
		Devise operator-(Devise& d);
		Devise operator+(Devise& d);
		Devise operator*(double d);
		bool operator<=(Devise& d);
		Devise operator/(int i);
		Devise operator+(double d);
		~Devise();

	};
};

