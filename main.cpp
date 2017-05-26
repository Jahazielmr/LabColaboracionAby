#include <iostream>
#include <string>
#include <vector> 
#include <>

using namespace std;


int main(){

	 	char resp ='s';

        int option;
        int op;
        
        while(resp=='s'||resp=='S'){
                
                cout <<"Menu"<<endl;
                cout <<"1-Agregar"<<endl;
                cout <<"2-Listar"<<endl;
                cout <<"3-Modificar"<<endl;
                cout <<"4-Eliminar"<<endl;
                cout <<"5-ventas"<<endl;
                cout <<"6-Reporte de Ventas"<<endl;
                cin>> option;

                switch (option){

                        case 1:{
                        		//Agregar
                                cout<<"1-Agregar Cliente"<<endl;
                                cout<<"2-Agregar Personal"<<endl;
                                cout<<"3-Agregar sala"<<endl;
                                cin>>op;

                                switch(op){
                                        case 1:{

                                        	//Agregar  Cliente
                                        	
											double Dinero;
											string Nombre;

											cout<< " Ingrese cantidad de Dinero:  " ;
											cin>>Dinero;
											cout<< " Ingrese Nombre:  " ;
											cin>>Nombre;

											Cliente cliente(Dinero, Nombre);
											personas.push_back(cliente);


                                        break;
                                        }

                                        case 2:{
                                        	//agregar personal
                                        	Personal personal;

											string Puesto;
											string Nombre;

											cout<< " Ingrese Puesto:  " ;
											cin>>Puesto;
											cout<< " Ingrese Nombre:  " ;
											cin>>Nombre;


											personal(Puesto, Nombre);

											personas.push_back(personal);




                                        break;
                                        }

                                        case 3:{
                                        	//Agregar Sala

										Sala sala;

										string Horario;
										string Pelicula;
										double Precio;
										string Genero;

										cout<< " Ingrese Horario:  " ;
										cin>>Horario;
										cout<< " Ingrese Pelicula:  " ;
										cin>>Pelicula;
										cout<< " Ingrese Precio:  " ;
										cin>>Precio;
										cout<< " Ingrese Genero:  " ;
										cin>>Genero;

										sala(Horario, Pelicula, Precio, Genero);

										salas.push_back(sala);


                                        break;	
                                        }

                                }
                        break;
                        }

                        case 2:{
                        	//2-Listar
                        		int op2;

                        	 	cout<<"1-Listar Cliente"<<endl;
                                cout<<"2-Listar Personal"<<endl;
                                cout<<"3-Listar sala"<<endl;
                                cin>>op2;

                                switch(op2){
                                        case 1:{

                                        	//Listar  Cliente


                                        break;
                                        }

                                        case 2:{
                                        	//Listar personal

                                        break;
                                        }

                                        case 3:{
                                        	//Listar Sala

                                        break;	
                                        }

                                }
                                break;

                        }

                        case 3:{
                        	//modificar
                        		int op3;

                        	 	cout<<"1-Modificar Cliente"<<endl;
                                cout<<"2-Modificar Personal"<<endl;
                                cout<<"3-Modificar sala"<<endl;
                                cin>>op3;

                                switch(op3){
                                        case 1:{

                                        	//Modificar  Cliente
                                        	int pos;
											Cliente cliente;

											double Dinero;
											string Nombre;

											cout<<" Ingrese La posicion de lo que desea modificar:  ";
											cin>>pos;
											cout<< " Ingrese cantidad de Dinero para modificar :  " ;
											cin>>Dinero ;
											cout<< " Ingrese Nombre para modificar :  " ;
											cin>>Nombre ;

											personas[pos].setDinero(Dinero);
											personas[pos].setNombre(Nombre);



                                        break;
                                        }

                                        case 2:{
                                        	//Modificar personal

                                        	int pos;
											Personal personal;

											string Puesto;
											string Nombre;

											cout<<" Ingrese La posicion de lo que desea modificar:  ";
											cin>>pos;
											cout<< " Ingrese Puesto para modificar :  " ;
											cin>>Puesto;
											cout<< " Ingrese Nombre para modificar :  " ;
											cin>>Nombre;

											

											personas[pos].setPuesto(Puesto);
											personas[pos].setNombre(Nombre);


                                        break;
                                        }

                                        case 3:{
                                        	//Modificar Sala

                                        	int pos;
											Sala sala;

											string Horario;
											string Pelicula;
											double Precio;
											string Genero;

											cout<<" Ingrese La posicion de lo que desea modificar:  ";
											cin>>pos;
											cout<< " Ingrese Horario para modificar :  " ;
											cin>>Horario;
											cout<< " Ingrese Pelicula para modificar :  " ;
											cin>>Pelicula;
											cout<< " Ingrese Precio para modificar :  " ;
											cin>>Precio;
											cout<< " Ingrese Genero para modificar :  " ;
											cin>>Genero;

											salas[pos].setHorario(Horario);
											salas[pos].setPelicula(Pelicula);
											salas[pos].setPrecio(Precio);
											salas[pos].setGenero(Genero);

                                        break;	
                                        }

                                }
                                break;

                        }

                        case 4:{
                        	//Eliminar
                        		int op4;

                        	 	cout<<"1-Eliminar Cliente"<<endl;
                                cout<<"2-Eliminar Personal"<<endl;
                                cout<<"3-Eliminar sala"<<endl;
                                cin>>op4;

                                switch(op4){
                                        case 1:{

                                        	//Eliminar  Cliente



                                        break;
                                        }

                                        case 2:{
                                        	//Eliminar personal

                                        break;
                                        }

                                        case 3:{
                                        	//Eliminar Sala

                                        break;	
                                        }

                                }
                                break;
                        }

                        case 5:{
                        	//ventas

                        break;
                        }

                        case 6:{
                        	//reporte de ventas 

                        }



                }

}
