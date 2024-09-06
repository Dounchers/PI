#include <iostream>
using namespace std;
int main(){
int cant=0;
int num;
do{
    cout<<"Ingrese numero: ";
    cin>>num;
    if(num<0){
        cant+=1;
    }
}while(num!=0);
cout << "Cantidad de numeros negativos: " << cant << endl;
return 0;
}