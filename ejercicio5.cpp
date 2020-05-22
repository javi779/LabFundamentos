#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int numero;
	char letra[20];
	cout<<"escriba una palabra: ";
	cin>>letra;
	
	numero=strlen(letra);
	if(letra[0]==letra[numero-1]){
		cout<<"Su palabra empieza y termina con la misma letra";
	}
	else{
		cout<<"Su palabra no empieza ni termiina con la misma letra";
	}
	return 0;
}
