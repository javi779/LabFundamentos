#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	int numero; 
	char letra[20];
	cout<<"Escribe una palabra: ";
	cin>>letra;
	
	numero=strlen(letra);
	
	if(numero>10){
		cout<<"Su palabra es mayor a 10";
	}
	else{
		cout<<"Su palabra es menor a 10";
	}
	
	if(numero%2==0){
		cout<<"\nLa longitud de su palabra es par";
	}
	else{
		cout<<"\nLa longitud de su palabra es impar";
	}
	return 0;
}
