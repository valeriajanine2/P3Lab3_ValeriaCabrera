#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int opcion = 0;
	while(opcion!=5){
		cout<<"MENU\n"<<"1) Ejercicio 1\n"<<"2) Ejercicio 2\n"<<"3) Ejercicio 3\n"<<"4) Ejericio 4\n"<<"5) Salir"<<endl;
		cout<<"Ingrese la opcion que desea realizar: ";
		cin>>opcion;
		switch(opcion){
			
			case 1:{
				
				break;
			}//fin del case 1
			
			case 2:{
				
				break;
			}//fin del case 2
			
			case 3:{
				
				break;
			}//fin del case 3
			
			case 4:{
				
				break;
			}//fin del case 4
			
			case 5:{
				cout<<"Adios, tenga buen dia";
				break;
			}//fin del case 5 de salida del menu
			
			default:{
				cout<<"Asegurese de ingresar una de la opciones del menu"<<endl;
				break;
			}
			
		}//fin del switch
	}//fin del while de opcion
	return 0;
}
