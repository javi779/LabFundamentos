#include <iostream>

using namespace std;
void leerarreglo(int [],int, int []);
void suma(int [],int,int [],int[]);
void resultado(int [],int);

int main(){
	int a1;
	cout<<"ingrese cuantos numeros quiere en su arreglo: ";
	cin>>a1;
	
	int arreglo1[a1];
	int arreglo2[a1];
	leerarreglo(arreglo1,a1,arreglo2);
	int total[a1];
	suma(arreglo1,a1,arreglo2,total);
	resultado(total,a1);
	return 0;
}
void leerarreglo(int arreglo1[],int a1,int arreglo2[]){
	for(int i=0;i<a1;i++){
		cout<<"ingrese un numero para el arreglo 1: ";
		cin>>arreglo1[i];
	}
	for(int i=0;i<a1;i++){
		cout<<"ingrese un numero para el arreglo 2: ";
		cin>>arreglo2[i];
	}
}
void suma(int arreglo1[],int a1, int arreglo2[],int total[]){
	for(int i=0;i<a1;i++){
		total[i]=arreglo1[i]+arreglo2[i];
	}
}
void resultado(int total[],int a1){
	for(int i=0;i<a1;i++){
		cout<<"\nsus resultados son "<<total[i];
	}
}
