#pragma once
#include "Persona.h"
#include<string>
using namespace std;

class Cliente : public Persona{

	protected:
		int Dinero;

	public:
		Cliente(int, string);
		int getDinero();
		void setDinero(int Dinero);


};

