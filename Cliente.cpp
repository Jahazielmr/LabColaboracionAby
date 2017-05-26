#include "Cliente.h"
Cliente::Cliente( double Dinero, string Nombre) : Persona(Nombre) {
	this-> Dinero=Dinero;
	this-> Nombre=Nombre;
}


double Cliente::getDinero(){

return Dinero;
}

void Cliente::setDinero(double Dinero){
	this->Dinero =Dinero;

}







