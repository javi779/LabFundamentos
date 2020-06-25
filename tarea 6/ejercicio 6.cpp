#include <iostream>

using namespace std;

void mango(int [],int);//arreglo , tamaño 
int buscar(int [],int);

int main(){
	int numero;
	
	cout<<"digite el numero de elementos de su arreglo: ";
	cin>>numero;
	
	int role[numero];
	mango(role,numero);
	
	cout<<"su numero se repite "<<buscar(role,numero)<<" veces";
	
	return 0;
}
void mango(int role[], int numero){
	for(int i=0;i<numero;i++){
		cout<<"digite un numero: ";
		cin>>role[i];
	}
}
int buscar(int role[], int numero){
	int m, contar=0;
	cout<<"Que numero deseas buscar: " ;
	cin>>m;
	for(int i=0;i<numero;i++){
		if(role[i]==m){
			contar++;
		}
		
	}return contar;
}

