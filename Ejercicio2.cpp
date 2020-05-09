#include <iostream>


using namespace std;

int main(){

    int t1,t2;

    cout<<"Escribe un digito: ";

    cin>>t1;
    cout<<"Escribe un digito: ";

    cin>>t2;

    if (t1%t2==0){
        cout<<"\nSus digitos son divisibles entre si";
    }
    else{
        cout<<"\nSus digitos no son divisibles entre si";
    }
   
    return 0;
}