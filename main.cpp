#include <iostream>
#include <string>
#include <vector> 
#include "Persona.h"
#include "Cliente.h"
#include "Personal.h"
#include "Venta.h"
#include "Sala.h"
#include <typeinfo>

using namespace std;


int main(){

	 	char resp ='s';
		vector<Sala*> salas;
		vector<Venta*> ventas;
		vector<Persona*> personas;
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
                                        case 1:{																																																						for (int i=0;i<personas.size();i++){
																if (typeid(personas[i])==typeid(Cliente)){
																	Cliente* cliente = reinterpret_cast<Cliente*>(personas[i]);
																	cout << i << " " << personas[i]->getNombre() << " " << cliente->getDinero() << endl;
																}
															}

                                        	//Listar  Cliente


                                        break;
                                        }

                                        case 2:{

															for (int i=0;i<personas.size();i++){
                                                if (typeid(personas[i])==typeid(Personal)){
                                                   cout << i << " " << personas[i]->getNombre() << endl;
                                                }
                                             }

                                        	//Listar personal

                                        break;
                                        }

                                        case 3:{
                                   			
															for (int i=0; i<salas.size();i++){
																cout << i << " " << salas[i]->getHorario() << " " << salas[i]->getPelicula() << " " << salas[i]->getGenero() << " " << salas[i]->getPrecio() << endl;
															}

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
													int pos;
                                        case 1:{
															for (int i=0; i<personas.size(); i++){
																
																 if (typeid(personas[i])==typeid(Cliente)){
                                                   	cout << i << " " << personas[i]->getNombre() << " " << endl;
                                                }
															}	
																cout << "Ingrese la posicion que desea eliminar: ";
																cin >> pos;
	
																personas.erase(pos+personas.begin());
															

                                        	//Eliminar  Cliente



                                        break;
                                        }

                                        case 2:{

															for (int i=0; i<personas.size(); i++){

                                                 if (typeid(personas[i])==typeid(Personal)){
                                                      cout << i << " " << personas[i]->getNombre() << endl;
                                                }
															}

                                                cout << "Ingrese la posicion que desea eliminar: ";
                                                cin >> pos;

                                                personas.erase(pos+personas.begin());
                                             

                                        	//Eliminar personal

                                        break;
                                        }

                                        case 3:{

                                               for (int i=0; i<salas.size();i++){
                                                	cout << i << " " << salas[i]->getHorario() << " " << salas[i]->getPelicula() << " " << salas[i]->getGenero() << " " << salas[i]->getPrecio() << endl;
                                             }
   

                                                cout << "Ingrese la posicion que desea eliminar: ";
                                                cin >> pos;

                                                salas.erase(pos+salas.begin());
                                            

                                        	//Eliminar Sala

                                        break;	
                                        }

                                }
                                break;
                        }

                        case 5:{

										for (int i=0; i<ventas.size(); i++){
											cout << i << " " << ventas[i]->getNombrePersonal() << " " << ventas[i]->getNombreCliente() << " " << ventas[i]->getHorario() << " " << ventas[i]->getFecha() << " " << ventas[i]->getPelicula() << " " << ventas[i]->getTotal() << endl;
										}
                        	//ventas
									

                        break;
                        }

                        case 6:{
                        	//reporte de ventas 

                        }



                }
}
}
