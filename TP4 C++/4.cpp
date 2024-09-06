#include <iostream>
using namespace std;

int CantDigitos(int numero){
    if(numero==0){
        return 0;
    }else{
        return 1+CantDigitos(numero/10);
    }
}

int main() {
cout<<CantDigitos(650);
}