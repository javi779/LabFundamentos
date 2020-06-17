#include <iostream>

using namespace std;

int calculamcd(int,int);

int main(){
	int n1, n2, n3;
	cout<<"Digite su primer numero: ";
	cin>>n1;
	cout<<"Digite su segundo numero: ";
	cin>>n2;
	
	n3=calculamcd(n1,n2);
	cout<<"Su mcd es: "<<n3;
	
	
	return 0;
}
int calculamcd(int n1,int n2){
	int x=1;
	
	if(n1==n2){
		n1=n2;
	}
	else{
		if(n1>n2){
			while(x!=0){
				x=n1%n2;
				n1=n2;
				n2=x;
			}
		}
		else{
			while(x!=0){
				x=n2%n1;
				n2=n1;
				n1=x;
			}
			n1=n2;
		}
	}
	return n1;
}
