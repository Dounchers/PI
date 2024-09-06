//Ejercicio 6.
//Permitir al usuario guardar en una lista enlazada simple los nombres de los alumnos de un curso, insertando al
//final de la lista y cortando la carga cuando se inserte como nombre "x", ya sea en mayúscula o en minúscula (el cual no debe insertarse en la lista).
//A continuación, solicitar al usuario el nombre de un alumno e informar si se encuentra en la lista o no.
//Por último, eliminar a la alumna "Josefina Ortega" de la lista (se asume que no se han almacenado nombres
//repetidos).


#include <iostream>
#include <string>
using namespace std;
struct Nodo{
    string nombre;
    Nodo* siguiente;
};
void ImprimirLista(Nodo * inicio){
    Nodo * aux=inicio;
    while(aux!=nullptr){
        cout<<aux->nombre<<" ";
        aux=aux->siguiente;
        cout<<endl;
    }
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
bool SeEncuentra(Nodo* inicio,string nombreBuscar){
    for(Nodo* aux=inicio;aux!=nullptr;aux=aux->siguiente){
        if(nombreBuscar==aux->nombre){
            return true;
        }
    }
    return false;
}

Nodo* EliminarDato(Nodo* inicio, string nombreEliminar) {
    if (inicio != nullptr) {
        Nodo *aux = inicio; // Declarar aux en este ámbito

        if (inicio->nombre == nombreEliminar) {
            inicio = inicio->siguiente;
            delete aux;
        } else {
            while ((aux->siguiente != nullptr) && (aux->siguiente->nombre != nombreEliminar)) {
                aux = aux->siguiente;
            }
            if (aux->siguiente != nullptr && aux->siguiente->nombre == nombreEliminar) {
                Nodo* aEliminar = aux->siguiente;
                aux->siguiente = aEliminar->siguiente;
                delete aEliminar;
            }
        }
    }
    return inicio;
}




int main(){
string nombre;
cout<<"Ingrese nombre y apellido (x para finalizar): ";
cin>>nombre;
Nodo * inicio=nullptr;
while(nombre!="x" and nombre!="X"){
    Nodo* nuevo;
    nuevo= new Nodo;
    nuevo->nombre=nombre;
    nuevo->siguiente=nullptr;
    inicio=ingresarFinal(inicio,nuevo);
    cout<<"Ingrese nombre y apellido (x para finalizar): "<<endl;
    cin>>nombre;
}
ImprimirLista(inicio);


string nombreBuscar;
cout<<"Ingrese nombre a buscar: ";
cin>>nombreBuscar;

if(SeEncuentra(inicio,nombreBuscar)){
    cout<<"El usuario se encuentra en la lista."<<endl;
}else{
    cout<<"El usuario NO se encuentra en la lista."<<endl;
}
string nombreEliminar;
cout<<"Ingrese nombre a eliminar: ";
cin>>nombreEliminar;
inicio=EliminarDato(inicio,nombreEliminar);
ImprimirLista(inicio);
}