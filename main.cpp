#include <iostream>
#include <array>
#include <string.h>
#include <vector>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	//ejercicio 1
	
	string repetidos(string original){
		
		string result;
		int aux = 0;
		
		for(int i = 0; i < sizeof(original); i++){
			aux=0;
			for(int j=0; j < sizeof(original); j++){
				if(original[i]==original[j] ){
					//es repetida
					aux++;
				}
			}
			if(!(aux>1)){
				result.push_back(original[i]);	
			}	
					
		}//fin de for principal
		
		return result;
	}
	
	//ARREGLAR ESTOOOOOOOO
	
	
	vector<char> Ejercicio1 (string cadena) {
		
		vector<char> v(sizeof(cadena)/4);
		
		for(int i = 0; i < sizeof(cadena); i++){
			v.push_back((cadena[i]));
		}
		
		return v;
		
	}
	
	//Ejercicio 2
	
	int* 
	
	

int main(int argc, char** argv) {
	
	int opcion = 0;
	while(opcion!=5){
		cout<<"MENU\n"<<"1) Ejercicio 1\n"<<"2) Ejercicio 2\n"<<"3) Ejercicio 3\n"<<"4) Ejericio 4\n"<<"5) Salir"<<endl;
		cout<<"Ingrese la opcion que desea realizar: ";
		cin>>opcion;
		switch(opcion){
			
			case 1:{
				
				string cadena;
				cout<<"Ingrese una palabra: ";
				cin>>cadena;
				
				cout<<repetidos(cadena)<<endl;
				
				vector<char> resp = Ejercicio1((repetidos(cadena)));
				
				//imprimir vector
				cout<<"[";
				for(int i = 0; i < resp.size(); i++){
					cout<<resp.at(i)<<" ";
				}
				cout<<"]"<<endl;
				//no se por que se imprime con unos espacios extra ahí
				
				break;
			}//fin del case 1
			
			case 2:{
				
				string cadena;
				vector<char> arr()
				cout<<"Ingrese una palabra: ";
				
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
