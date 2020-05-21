#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float r, area,Perimetro;
    cout<<"Coloque el radio del circulo: ";
    cin>>r;
    area=3.1416*pow(r,2);
    Perimetro=2*3.1416*r;
    cout<<"el Perimetro del circulo es: "<<Perimetro<<endl;
    cout<<"el area del circulo es: "<<area<<endl;

    return 0; 
}