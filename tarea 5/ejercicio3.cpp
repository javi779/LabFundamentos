#include <iostream>

using namespace std;
void hora(int, int, int);
int main(){
	int h, m, s;
	cout<<"introduzca una hora: ";
	cin>>h;
	cout<<"introduzca unos minutos: ";
	cin>>m;
	cout<<"introduzca unos segundos: ";
	cin>>s;
	hora(h, m, s);
	return 0;
}
void hora(int h, int m, int s){
	if((h>0)&&(h<24)&&(m>0)&&(m<60)&&(s>0)&&(s<60)){
		s++;
		if(s==60){
			s=0;
			m++;
			if(m==60){
				m=0;
				h++;
				if(h==24){
					h=0;
				}
			}
		}
		cout<<"Su hora es: "<<h<<":"<<m<<":"<<s<<endl;
	}else{
		cout<<"ERROR su hora esta mal escrita!";
	}
}
