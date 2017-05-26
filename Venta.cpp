#include "Venta.h"

Venta::Venta(double Total,string NombreCliente,string NombrePersonal,string Fecha,string Horario,string Pelicula){
    this->Total=Total;
    this->NombreCliente=NombreCliente;
    this->NombrePersonal=NombrePersonal;
    this->Fecha=Fecha;
    this->Horario=Horario;
    this->Pelicula=Pelicula;
}

Venta::Venta(){

}

void Venta::setTotal(double Total){
   this-> Total=Total;
}

double Venta::getTotal(){
   return Total;
}

void Venta::setNombreCliente(string NombreCliente){
   this-> NombreCliente=NombreCliente;
}

string Venta::getNombreCliente(){
   return NombreCliente;
}

void Venta::setNombrePersonal(string NombrePersonal){
   this-> NombrePersonal=NombrePersonal;
}

string Venta::getNombrePersonal(){
   return NombrePersonal;
}

void Venta::setFecha(string Fecha){
   this-> Fecha=Fecha;
}

string Venta::getFecha(){
   return Fecha;
}

void Venta::setHorario(string Horario){
   this-> Horario=Horario;
}

string Venta::getHorario(){
   return Horario;
}

void Venta::setPelicula(string Pelicula){
   this-> Pelicula=Pelicula;
}

string Venta::getPelicula(){
   return Pelicula;
}

