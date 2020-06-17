#include <iostream>

using namespace std;
void diames(int, int, int);

int main(){
	int dia, mes, year;
	  
	cout<<"ingrese un dia: ";
	cin>>dia;
	cout<<"ingrese un mes: ";
	cin>>mes;
	cout<<" ingrese un año: ";
	cin>>year;
	diames(dia, mes, year);
	
}
void diames(int dia, int mes, int year){
	bool year1;
	if(year%400==0){
		year1=true;
	}else if((year%4==0)&&(year%100!=0)){
		year1=true;
	}else{
		year1=false;
	}
	if((dia==0)||(dia>31)||(mes>12)||(mes==0)||(year==0)){
		cout<<"ERROR DE DIGITACION";
	}else if((mes==2)&&(dia>29)){
		cout<<"ERROR DE DIGITACION";
	}else{
		if(year1==true){
			dia++;
			switch(mes){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if(dia>31){
						dia=1;
						mes++;
						if(mes>12){
							mes=1;
							year++;
						}
					}
					break;
				default:
					break;
			}
			switch(mes){
				case 4:
				case 6:
				case 9:
				case 11:
					if(dia>30){
						dia=1;
						mes++;	
					}
					break;
				default:
					break;	
			}
			switch(mes){
				case 2:
					if(dia>29){
						dia=1;
						mes++;
					}
					break;
				default:
					break;
			}
		}else{
			dia++;
			switch(mes){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if(dia>31){
						dia=1;
						mes++;
						if(mes>12){
							mes=1;
							year++;
						}
					}
					break;
				default:
					break;
			}
			switch(mes){
				case 4:
				case 6:
				case 9:
				case 11:
					if(dia>30){
						dia=1;
						mes++;	
					}
					break;
				default:
					break;	
			}
			switch(mes){
				case 2:
					if(dia>28){
						dia=1;
						mes++;
					}
					break;
				default:
					break;
			}
		}
		cout<<"El dia siguiente es: "<<dia<<"/"<<mes<<"/"<<year;
	}	

}
