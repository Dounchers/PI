#include <iostream>
using namespace std;
int main(void){
char l1,l2,l3;
    cout<<"Ingrese primer letra: ";
    cin>>l1;
    cout<<"Ingrese segunda letra: ";
    cin>>l2;
    cout<<"Ingrese tercer letra: ";
    cin>>l3;
    if(l1>l2 && l1>l3){
        cout<<"La mayor letra en ASCII es:"<<l1;
    }else if(l2>l1 && l2>l3){
        cout<<"La mayor letra en ASCII es:"<<l2;
    }else if(l3>l1 && l3>l2){
        cout<<"La mayor letra en ASCII es:"<<l3;
    }else{
        cout<<"Todas las letras en ASCII son iguales";
    }
}