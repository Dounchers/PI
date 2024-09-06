//Ejercicio 12.
//Generar una inicio enlazada simple con la nómina de artículos de un supermercado. De cada artículo se conoce:
//código, descripción, precio y stock. La carga finaliza con el código -1. Se solicita:
//A. Leer de teclado un porcentaje e incrementar el precio de todos los artículos en esa cantidad.
//B. Incrementar el stock de un artículo. Se lee de teclado el código y la cantidad con la que se debe
//incrementar el stock. Si no existe el artículo en la inicio se debe informar.
//C. Eliminar de la inicio los artículos que no tienen stock.
#include <iostream>
#include <string>
using namespace std;

struct Articulo{
    int Codigo;
    string Descripcion; 
    int Precio;
    int Stock;
};
struct Nodo{
    Articulo articulo;
    Nodo* siguiente;
};
void ImprimirLista(Nodo * inicio){
cout<<"Inicio-> ";
    while(inicio!=nullptr){
        cout<<"{";
        cout<<"Codigo: "<<inicio->articulo.Codigo<<"-";
        cout<<"Descripcion: "<<inicio->articulo.Descripcion<<"-";
        cout<<"Precio: "<<inicio->articulo.Precio<<"-";
        cout<<"Stock: "<<inicio->articulo.Stock<<"-";
        cout<<"} ->";
        inicio=inicio->siguiente;
    }
cout<<"Nullptr";  
}

Nodo* InsertarAdelante(Nodo* inicio,Nodo* nuevo){
    nuevo->siguiente=inicio;
    return nuevo;
}


void IncrementarPrecio(Nodo* inicio){
    int porcentaje;
    cout<<"Ingrese porcentaje para aumentar precio: ";
    cin>>porcentaje;
    while(inicio!=nullptr){
        inicio->articulo.Precio+=(porcentaje*inicio->articulo.Precio)/100;
        inicio=inicio->siguiente;
    }
}

void IncrementarStock(Nodo* inicio){
    int codigoBuscar;
    cout<<"Ingrese codigo a buscar: ";
    cin>>codigoBuscar;
    while(inicio!=nullptr){
        if(inicio->articulo.Codigo==codigoBuscar){
            int stockAumentar;
            cout<<"Ingrese el stock a aumentar: ";
            cin>>stockAumentar;
            inicio->articulo.Stock+=stockAumentar;
            cout<<"Stock del articulo"<<inicio->articulo.Codigo<<" ha sido aumentado."<<endl;
            return;
        }
        inicio=inicio->siguiente;
    }
    cout<<"El articulo no se encuentra en la lista.";
}

int main(){
Nodo*inicio=nullptr;
int codigo;
string descripcion; 
int precio;
int stock;
cout<<"Ingrese código del articulo: ";
cin>>codigo;
while(codigo!=-1){
    Nodo* nuevo= new Nodo;
    nuevo->articulo.Codigo=codigo;
    cout<<"Ingrese descripcion: "<<endl;
    cin>>descripcion;
    nuevo->articulo.Descripcion=descripcion;
    cout<<"Ingrese precio: "<<endl;
    cin>>precio;
    nuevo->articulo.Precio=precio;
    cout<<"Ingrese stock: "<<endl;
    cin>>stock;
    nuevo->articulo.Stock=stock;
    nuevo->siguiente=nullptr;
    inicio=InsertarAdelante(inicio,nuevo);
    cout<<"Ingrese codigo del articulo: "<<endl;
    cin>>codigo;
}
ImprimirLista(inicio);
cout<<endl;  
IncrementarPrecio(inicio);
ImprimirLista(inicio);
cout<<endl;  
IncrementarStock(inicio);
cout<<endl; 
ImprimirLista(inicio);

}