#include <iostream>
using namespace std;

int Potencia(int base,int exponente){
    if(base==0){
        return 0; //SI LA BASE YA ES CERO YA RETORNO EL RESULTADO 0
    }
    if(exponente==0){
        return 1; //SI EL EXPONENTE ES CERO YA RETORNO EL RESULTADO 1
    }
    if(exponente==1){
        return base;
    }else{
        return base* Potencia(base,exponente-1);
    }
}

int main() {
cout<<Potencia(2,4); 
}