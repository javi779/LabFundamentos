#include <iostream>

using namespace std;

int main(){
	int t1;
	cout<<"Escribe un numero: ";
	cin>>t1;
	
	if(t1>0){
		cout<<"Su numero es positivo :)";
	}
	else if(t1<0){
		cout<<"Su numero es negativo:(";
	}
	else if(t1==0){
		cout<<"Su numero es cero";
	}
	
	
	
	return 0;
}
