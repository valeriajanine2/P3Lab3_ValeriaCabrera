#include <iostream>
#include <array>
#include <string.h>
#include <vector>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	//probar
	void mostrar_vector(const vector<char> elementos) {
		for (char elemento : elementos) cout << elemento << " ";
		cout << endl;
	}


	//ejercicio 1
	
	
	string repetidos(string original){
		
		
		string result;
		int aux = 0;
		int aux2=0;
		
		for(int i = 0; i < original.size(); i++){
			aux=0;
			for(int j=0; j < original.size(); j++){
				if(original[i]==original[j] ){
					//es repetida
					aux++;
				}
			}
			if(aux==1){
				result.push_back(original[i]);	
		 	}
		 	 
				
		}//fin de for principal
		
		
		return result;
	}
	
	//ARREGLAR ESTOOOOOOOO
	
	
	vector<char> Ejercicio1 (string cadena) {
		
		vector<char> v(cadena.size());
		
		for(int i = 0; i < cadena.size(); i++){
			v.push_back((cadena[i]));
		}
		
		return v;
		
	}
	
	//Ejercicio 2

	int* ejercicio2(string cad, vector<char> vect){
		
		int* arrP = new int[vect.size()];
		
		int cont=0;
		
		for(int i = 0; i < vect.size(); i++ ){
			cont=0;
			char aux = vect.at(i);
			for(int j = 0; j < cad.size(); j++){
				if(aux==cad.at(j)){
					cont++;
				}
			}//fin del for de la cadena
			if(cont>=1){
				arrP[i]=cont;
			}
			
		}
		
		return arrP;
		
		delete arrP;
		
	}	

	//Ejercicio 3

	int* ejercicio3(int arr[], int org[], int t){
		
		int* aP = new int[t];
		
		
		int temp;
		//sort el arreglo original y dejarlo en forma ascendente
		for(int i = 0; i < t; i++ ){
			for(int j = 0; j < t; j++){
				if(arr[i]>arr[j]){
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}//fin del if
			}//fin del for interno
		}//fin del for externo
		
		//tomar el indice de los elementos del arreglo original
		for(int i = 0; i < t; i++){
			for(int j = 0; j < t; j++){
				if(arr[i]==org[j]){
					aP[i]=j;
					
				}
			}
		}
		
		//odio los punteros :(
		
		return aP;
		
		delete aP;
	}
	
	//Ejercicio 4
	
	string ejercicio4(string cad){
		
		string resp;
		
		string aux = repetidos(cad);
		char a;
		int cont=0;
		
		for(int i = 0; i < aux.length(); i++){
			cont=0;
			a=aux.at(i);
			for(int j = 0; j < cad.length(); j++){
				if(a==cad.at(j)){
					cont++;
				}//fin del if que lleva el contador
			}//fin del for que recorre la palabara completa
			for(int k = 0; k < cont; k++){
				resp+=a;
			}//fin del for que agrega la letra las veces que tenga el cont
		}//fin de for que recorre la palabra sin repetidos
		
		return resp;
	}
	
	

int main(int argc, char** argv) {
	
	int opcion = 0;
	while(opcion!=5){
		cout<<"MENU\n"<<"1) Ejercicio 1\n"<<"2) Ejercicio 2\n"<<"3) Ejercicio 3\n"<<"4) Ejercicio 4\n"<<"5) Salir"<<endl;
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
				int tam;
				string letras;
				cout<<"Ingrese una palabra: ";
				cin>>cadena;
				cout<<"Ingrese los caracteres del vector (sin espacios ni comas): ";
				cin>>letras;
				vector<char> arr(letras.size());
				
				//recorrer la cadena de letras y meterlas en el vector
				for(int i = 0; i < letras.size(); i++){
					arr.push_back(letras.at(i));
				}
				
				int *p;
				p=ejercicio2(cadena,arr);
				for(int i = 0; i < sizeof(p); i++){
					cout<<*(p+i)<<" ";
				}
				
				cout<<endl;
				
				break;
			}//fin del case 2
			
			case 3:{
				int tam;
				int arr[tam];
				int org[tam];
				
				cout<<"Ingrese el tamaño del arreglo de numeros: ";
				cin>>tam;
				for(int i = 0; i < tam;i++){
					cout<<"Ingrese el elemento "<<i+1<<": ";
					cin>>arr[i];
				}
				
				for(int i = 0; i < tam;i++){
					org[i]=arr[i];
				}
				
			
				int *punt;
				
				punt = ejercicio3(arr,org,tam);
				
				cout<<"[ ";
				for(int i = 0; i < tam; i++){
					cout<<*(punt+i)<<" ";
				}
				cout<<"]"<<endl;
				
				break;
			}//fin del case 3
			
			case 4:{
				
				string cadena;
				cout<<"Ingrese una palabra: ";
				cin>>cadena;
				
				cout<<ejercicio4(cadena)<<endl;
				
				
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
