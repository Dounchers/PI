#include <iostream>
#include <string>
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
void IngresoNumeros(int longitud){
    int arreglo[longitud];
    int dl=longitud;
    for(int i=0;i<longitud;i++){
        int ingreso;
        cout<<"Ingrese numero "<<i+1<<" : ";
        cin>>ingreso;
        arreglo[i]=ingreso;
        dl--;

    }
}
void IngresoDescendente(int longitud){
    int arreglo[longitud];
    int dl=longitud;
    for(int i=longitud-1;i>=0;i--){
        int ingreso;
        cout<<"Ingrese num: ";
        cin>>ingreso;
        arreglo[i]=ingreso;
        dl--;
    }
}
void OrdenarArreglo(int longitud){
    int arreglo[longitud];
    int dl=longitud;
    for(int i=0;i<longitud;i++){
        int ingreso;
        cout<<"Ingrese numero "<<i+1<<" : ";
        cin>>ingreso;
        arreglo[i]=ingreso;
        dl--;
    }
    int i,j,aux,min;
    for(i=0;i<longitud;i++){
        min=i; //Minimo es i porque siempre ponemos el valor menor en la primer posición
        for(j=i+1;j<longitud;j++){
            if(arreglo[j]<arreglo[min]){ //Si nuestro arreglo en el número que estamos parados es menor que nuestro minimo previo que está parado en el indice 0
                min=j; //ENTONCES nuestro mínimo será el nuevo INDICE del numero en el que nos paramos
            }
        }
        //Intercambiamos dentro del bucle exterior, los valores que analizamos para que el minimo hallado esté en la posición 0;
        aux=arreglo[i]; //El auxiliar toma el VALOR en el índice previo para no perderlo
        arreglo[i]=arreglo[min]; //Hacemos el intercambio entre el primer elemento y el minimo que habiamos encontrado YA QUEDA ORDENADO;
        arreglo[min]=aux; //Nuestro VALOR del primer elemnto pasa a tomar el índice del minimo que encontramos, y se coloca en el arreglo desordenado.
    }
    imprimirArreglos(arreglo,10);

}

int main() {
    IngresoNumeros(10);
    IngresoDescendente(10);
    OrdenarArreglo(10);
}