//Ejercicio 5.
//Implementar una función llamada mas_uno que tiene como parámetro un arreglo estático de enteros y que
//incrementa en uno el valor de cada elemento de dicho arreglo. Añadir otros parámetros que se necesiten
#include <iostream>
using namespace std;
void imprimirArreglos(int arreglo[], int longitud) {
    std::cout << "[";
    for (int i = 0; i < longitud; i++) {
        std::cout << arreglo[i];
        if (i < longitud - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}
void mas_uno(int enteros[],int longitud){
    for(int i=0;i<longitud;i++){
        enteros[i]+=1;
    }
    imprimirArreglos(enteros,longitud);
}

int main(){
int enteros[5]={1,2,3,4,5};
mas_uno(enteros,5);
}

