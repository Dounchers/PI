//Ejercicio 7.
//Se lee de teclado una secuencia de números que finaliza con la primera ocurrencia de un número negativo, el
//cual no debe ser procesado. Los números deben ser almacenados en una lista enlazada simple. Se solicita:
//A. Leer de teclado un número e informar si existe en la lista.
//B. Leer de teclado un número e informar la cantidad de ocurrencias del número en la lista.
//C. Implementar una función que reciba la lista de números y genere dos nuevas listas, una con los
//números pares y otra con los impares. Las nuevas listas deberán estar formadas con los nodos de la lista
//original, la que quedará vacía después de invocar a la función. Imprimir las listas resultantes.

#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo* siguiente;
};
void ImprimirLista(Nodo * inicio){
    Nodo * aux=inicio;
    while(aux!=nullptr){
        cout<<aux->dato<<" ";
        aux=aux->siguiente;
    }
    cout<<endl;
}

Nodo* InsertarInicio(Nodo* inicio, Nodo* nuevo){ //RECIBE EL PUNTERO DEL INICIO DEL ARRAY Y EL PUNTERO DEL NUEVO NODO
    nuevo->siguiente=inicio; //el PUNTERO que contiene el NUEVO NODO, ahora apuntara al PUNTERO INICIO que apunta a su vez a nullptr
    return nuevo; //retorno NUEVO que será el PRIMER NODO, es decir mi inicio. Y el inicio anterior seguirá apuntando a nullptr
}
//--------------------------------------------------------------------------------------------------------------------------------
void IngresarInicioSeparadas(Nodo* &inicio,Nodo* &nuevo){   //es void porque los paso por referencia
    nuevo->siguiente=inicio;
    inicio=nuevo;
}
//---------------------------------------------------------------------------------------------------------------------------------

bool BuscarNumero(Nodo* inicio,int NumeroBuscar){
    for(Nodo* aux=inicio;aux!=nullptr;aux=aux->siguiente){
        if(NumeroBuscar==aux->dato){
            return true;
        }
    }
    return false;
}
int CantidadOcurrencias(Nodo* inicio,int NumeroOcurrencia){
int cantidad=0;
    for(Nodo* aux=inicio;aux!=nullptr;aux=aux->siguiente){
        if(NumeroOcurrencia==aux->dato){
            cantidad+=1;
        }
    }
    return cantidad;
}

void SepararListas(Nodo* &inicio,Nodo* &pares,Nodo* &impares){ //Les paso los nodos por referencia porque no puedo retornar dos nodos
Nodo* anterior;
while(inicio!=nullptr){
    anterior=inicio;
    inicio=inicio->siguiente;
        if((anterior->dato)%2==0){
            IngresarInicioSeparadas(pares,anterior);
        }else{
            IngresarInicioSeparadas(impares,anterior);
        }
    }
}
//---------------------------------------------------------------------------------------------------------------------------------


int main() {
int num;
Nodo* inicio=nullptr;
cout<<"Ingrese numero: ";
cin>>num;
while(num!=0){
    Nodo* nuevo;
    nuevo=new Nodo;
    nuevo->dato=num;
    nuevo->siguiente=nullptr;
    inicio=InsertarInicio(inicio,nuevo);
    cout<<"Ingrese otro numero: ";
    cin>>num;
}
int NumeroBuscar;
cout<<"Ingrese un numero a buscar: ";
cin>>NumeroBuscar;
if(BuscarNumero(inicio,NumeroBuscar)){
    cout<<"El numero se encuentra en la lista."<<endl;
    }else{
        cout<<"El numero NO se encuentra en la lista.";
    };
//-----------------------------------------------------//
int NumeroOcurrencia;
cout<<"Ingrese un numero para contabilizar ocurrencias: ";
cin>>NumeroOcurrencia;
cout<<"La cantidad de "<<NumeroOcurrencia<<" en la lista es de "<<CantidadOcurrencias(inicio,NumeroOcurrencia)<<endl;
//--------------------------------------------------------------------------------------------------------------------//
Nodo* pares=nullptr;
Nodo* impares=nullptr;
SepararListas(inicio,pares,impares);
ImprimirLista(pares);
ImprimirLista(impares);
}