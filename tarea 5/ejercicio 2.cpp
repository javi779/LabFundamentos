#include  <iostream>

using namespace std;
bool yearverda(int);

int main(){
	int year;
	
	cout<<"ingrese su año: ";
	cin>>year;
	
	if((yearverda(year))==true){
		cout<<"su año es bisiesto";
	}else{
		cout<<"su año no es bisiesto";
	}
	
	return 0;	
}
bool yearverda(int year){
	bool yea1;
	
	if(year%400==0){
		yea1=true;
	}else if((year%4==0)&&(year%100!=0)){
		yea1=true;
	}else{
		yea1=false;
	}
	return yea1;
}
