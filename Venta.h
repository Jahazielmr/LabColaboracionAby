#include <iostream>
#include <string>

using namespace std;

#ifndef VENTA_H
#define VENTA_H
class Venta{
    protected:
        double Total;
        string NombreCliente;
        string NombrePersonal;
        string Fecha;
        string Horario;
        string Pelicula;
    public:
        Venta(double,string,string,string,string,string);
        Venta();
        double getTotal();
        void setTotal(double);

        string getNombreCliente();
        void setNombreCliente(string);

        string getNombrePersonal();
        void setNombrePersonal(string);

        string getFecha();
        void setFecha(string);

        string getHorario();
        void setHorario(string);

        string getPelicula();
        void setPelicula(string);

};
#endif