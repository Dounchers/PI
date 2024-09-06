#include <iostream>
#include <string>
using namespace std;

struct Producto{ 
    string descripcion; 
    float precio;
}; 
struct Venta{ 
    Producto producto; 
    int cantidad; 
};
int main(){
Venta * puntero=nullptr;
puntero=new Venta;


cout<<"Ingrese Cantidad: ";
cin>>puntero->cantidad;
cout<<"Ingrese descripción: ";
cin>>(puntero->producto).descripcion;
cout<<"Ingrese precio: ";
cin>>(puntero->producto).precio;

cout<<puntero->cantidad<<endl;
cout<<(puntero->producto).descripcion<<endl;
cout<<(puntero->producto).precio<<endl;

cout<<(puntero->producto).descripcion<<endl;
cout<<"Monto total: "<<((puntero->producto).precio)*(puntero->cantidad)<<endl;


(puntero->producto).precio-=(((puntero->producto).precio)*15/100);
cout<<"Aplicando descuento de 15%..."<<endl<<(puntero->producto).precio<<endl;

delete puntero;
}