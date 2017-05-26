#include <iostream>
#include <string>

using namespace std;

#ifndef SALA_H
#define SALA_H
class Sala{
    protected:
        string Horario;
        string Pelicula;
        double Precio;
        string Genero;
    public:
        Sala(string,string,double,string);
        Sala();
        string getHorario();
        void setHorario(string);

        string getPelicula();
        void setPelicula(string);

        double getPrecio();
        void setPrecio(double);

        string getGenero();
        void setGenero(string);

};
#endif