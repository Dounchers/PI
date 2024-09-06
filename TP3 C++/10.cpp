//Ejercicio 10.
//Cargar una lista enlazada simple con palabras ingresadas por el usuario, las cuales deben almacenarse en
//minúsculas independientemente de cómo las ingrese. Luego, a partir de esa lista, generar una nueva lista con
//las palabras que se encuentran repetidas. Finalmente, imprimir ambas listas.
#include <iostream>
#include <string>
using namespace std;

struct Nodo{
    string palabra;
    Nodo* siguiente;
};

Nodo* InsertarInicio(Nodo* inicio, Nodo* nuevo){
    nuevo->siguiente=inicio;
    return nuevo;
}


string Minusculas(string palabra){
    string convertida="";
    for(char c:palabra){
        convertida+=tolower(c);
        }
    return convertida;
}

bool Existe(Nodo* inicio,string palabraExiste){
    while(inicio!=nullptr){
        if(inicio->palabra==palabraExiste){
            return true;
        }
        inicio=inicio->siguiente;
    }
    return false;
}

Nodo* GenerarRepetida(Nodo* inicio){
Nodo* inicioRepetida=nullptr;
    while(inicio!=nullptr){
        if(!Existe(inicioRepetida,inicio->palabra)){ //si la palabra no se encuentra ya en repetidas
            if(Existe(inicio->siguiente,inicio->palabra)){ //si efectivamente está repetida
                Nodo* NuevoRepetido=new Nodo;
                NuevoRepetido->palabra=Minusculas(inicio->palabra);
                NuevoRepetido->siguiente=nullptr;
                inicioRepetida=InsertarInicio(inicioRepetida,NuevoRepetido);
                }
            }
        inicio=inicio->siguiente;
        }
    return inicioRepetida;
}

void ImprimirLista(Nodo * inicio){;
    while(inicio!=nullptr){
        cout<<inicio->palabra<<" "<<"-> ";
        inicio=inicio->siguiente;
    }
    cout<<"nullptr";
}



int main() {
Nodo* inicio=nullptr;
string palabra;
cout<<"Ingrese palabra (x para finalizar): ";
cin>>palabra;
while(palabra!="x"){
Nodo* nuevo=new Nodo;
nuevo->palabra=Minusculas(palabra);
nuevo->siguiente=nullptr;
inicio=InsertarInicio(inicio,nuevo);
cout<<"Ingrese palabra (x para finalizar): ";
cin>>palabra;
}
ImprimirLista(inicio);
cout<<endl;
Nodo* inicioRepetida=GenerarRepetida(inicio);
ImprimirLista(inicioRepetida);

}