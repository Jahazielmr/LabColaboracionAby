#include "Sala.h"

Sala::Sala(string Horario,string Pelicula,double Precio,string Genero){
    this->Horario=Horario;
    this->Pelicula=Pelicula;
    this->Precio=Precio;
    this->Genero=Genero;
}

Sala::Sala(){

}

void Sala::setHorario(string Horario){
   this-> Horario=Horario;
}

string Sala::getHorario(){
   return Horario;
}

void Sala::setPelicula(string Pelicula){
   this-> Pelicula=Pelicula;
}

string Sala::getPelicula(){
   return Pelicula;
}

void Sala::setPrecio(double Precio){
   this-> Precio=Precio;
}

double Sala::getPrecio(){
   return Precio;
}

void Sala::setGenero(string Genero){
   this-> Genero=Genero;
}

string Sala::getGenero(){
   return Genero;
}

