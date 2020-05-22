#include <iostream>

using namespace std;

int main(){

	int n1,n2;
	
	cout<<"Escribe un digito: ";
	cin>>n1;
	cout<<"Escribe un digito: ";
	cin>>n2;
	
	if (n1%n2==0){
		cout<<"Su numero es divisible entre el otro";
	}
	else{
		cout<<"Su numero no es divisible entre el otro";
	}
	
	
	
	return 0;
}



