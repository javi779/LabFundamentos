#include <iostream>

using namespace std;
int main(){
    string producto;
    int cantidad;
    float precio, total;

    cout<<"ingrese el nombre de su producto: ";
    cin>>producto;
    cout<<"ingrese precio: ";
    cin>>precio;
    cout<<"ingrese cantidad: ";
    cin>>cantidad;

    total=precio*cantidad;

    cout<<"su total es: $"<<total<<endl;
    return 0;
}