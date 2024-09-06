//Escribir una función que, dado un arreglo de int y su dimensión lógica, invierta los elementos del arreglo.
//Ejemplos: Si el arreglo contiene los elementos [1,2,3,4,5] deberá quedar [5,4,3,2,1].
//Si el arreglo contiene [10,20] deberá quedar [20,10].
//Si el arreglo contiene [5] deberá quedar [5].

#include <iostream>
using namespace std;

void imprimirArreglo(int arreglo[], int dl) {
    for (int i = 0; i < dl; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

void InvertirArreglo(int arreglo[],int dl) {
    int aux;
    for(int i=0;i<(dl/2);i++){
        aux=arreglo[i];
        arreglo[i]=arreglo[dl-i-1]; //Le resto -i-1 porque sino me salgo del rango.
        arreglo[dl-i-1]=aux;        //Ej; i=0 -i=5 FUERA DE RANGO entonces -i-1=5-1=4 DENTRO DEL RANGO
    }
}
int main() {
    int arreglo[] = {1, 5, 8, 10};
    int dl = 4;

    cout << "Arreglo original: ";
    imprimirArreglo(arreglo, dl);

    InvertirArreglo(arreglo, dl); //Primero lo invierto para modificarlo porque se modifica desde memoria
    
    cout << "Arreglo invertido: ";
    imprimirArreglo(arreglo, dl); //Luego imprimo arreglo invertido

}