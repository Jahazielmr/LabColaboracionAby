#pragma once
#include "Persona.h"
#include<string>
using namespace std;

class Cliente : public Persona{

	protected:
		double Dinero;

	public:
		Cliente(double, string);
		double getDinero();
		void setDinero(double Dinero);


};

