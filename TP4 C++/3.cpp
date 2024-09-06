//Ejercicio 3.
//Escribir una función recursiva que, dado un número entero, lo imprima en orden inverso.
//Ejemplo: si el número es 5182, la función debe imprimir 2815.
#include <iostream>
using namespace std;
int InversoNumero(int numero, int resultado=0){
    if(numero<10){ //si ya estoy en el primer digito del num a invertir
        return resultado*10+numero;
    }
    resultado=(numero%10)+(resultado*10);//por cada digito que quito del num, se lo agrego al resultado(por eso mult por 10)
    return InversoNumero(numero/10,resultado);
}
int main() {
    cout<<InversoNumero(2415);
}
