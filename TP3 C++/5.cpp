//Se lee de teclado una secuencia de números enteros, finalizando cuando el usuario ingresa un cero (que no
//debe insertarse). Los números leídos deberán ser almacenados en una lista enlazada simple. Hacer tres
//versiones, insertando en cada una con diferente criterio, a saber:
//a) Al inicio de la lista.
//b) Al final de la lista.
//c) En la posición correcta para que la lista quede ordenada de menor a mayor. Si el número a insertar ya
//se encontraba en la lista, deberá quedar antes que todas sus repeticiones.
//Finalmente, imprimir la lista.

#include <iostream>
using namespace std;

struct Nodo{ 
    int dato; 
    Nodo* siguiente;
};

Nodo* ingresarInicio(Nodo* inicio, Nodo* nuevo){
    nuevo->siguiente=inicio;
    return nuevo;
}

Nodo* ingresarFinal(Nodo* inicio, Nodo* nuevo){
    if(inicio==nullptr){
        inicio=nuevo;
    }
    else{
        Nodo* aux=inicio;
        while(aux->siguiente!=nullptr){
            aux=aux->siguiente;
        }
        aux->siguiente=nuevo;
        nuevo->siguiente=nullptr;
    }
    return inicio;
}

Nodo* ingresarOrdenado(Nodo* inicio, Nodo* nuevo){
    if(inicio==nullptr or (nuevo->dato)<(inicio->dato)){
        nuevo->siguiente=inicio;
        inicio=nuevo;
    }else{
        Nodo* aux=inicio;
        while((aux->siguiente!=nullptr) && (aux->siguiente->dato)<(nuevo->dato)){
            aux=aux->siguiente;
        }
        nuevo->siguiente=aux->siguiente;
        aux->siguiente=nuevo;
    }
    return inicio;
}

void ImprimirLista(Nodo * inicio){
    Nodo * aux=inicio;
    while(aux!=nullptr){
        cout<<aux->dato<<" ";
        aux=aux->siguiente;
    }
}

int main() {
int num;
cout<<"Ingrese numero: ";
cin>>num;
Nodo * inicio=nullptr;
while(num!=0){
    Nodo* nuevo;
    nuevo= new Nodo;
    nuevo->dato=num;
    nuevo->siguiente=nullptr;
    inicio=ingresarInicio(inicio, nuevo);
    inicio=ingresarFinal(inicio, nuevo);
    inicio=ingresarOrdenado(inicio,nuevo);
    cout<<"Ingresar un numero(0 para cortar):";
    cin>>num;
}
cout << "Ingresados al inicio: ";
ImprimirLista(inicio);

}
