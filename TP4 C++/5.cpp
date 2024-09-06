#include <iostream>
using namespace std;
int SumaCuadrados(int numero){
    if(numero==1){
        return 1;
    }else{
        return (numero*numero + SumaCuadrados(numero-1));
    }
}
int main() {
cout<<SumaCuadrados(4);   
}
