#include "Cliente.h"
Cliente::Cliente( int Dinero, string Nombre) : Persona(Nombre) {
	this-> Dinero=Dinero;
	this-> Nombre=Nombre;
}


int Cliente::getDinero(){

return Dinero;
}

void Cliente::setDinero(int Dinero){
	this->Dinero =Dinero;

}

