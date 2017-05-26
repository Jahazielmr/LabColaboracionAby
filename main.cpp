#include <iostream>
#include <string>
#include <vector> 

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



                                        break;
                                        }

                                        case 2:{
                                        	//agregar personal

                                        break;
                                        }

                                        case 3:{
                                        	//Agregar Sala

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



                                        break;
                                        }

                                        case 2:{
                                        	//Modificar personal

                                        break;
                                        }

                                        case 3:{
                                        	//Modificar Sala

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
