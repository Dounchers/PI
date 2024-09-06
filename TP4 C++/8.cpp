#include <iostream>
#include <cstring>
using namespace std;

string StringInvertido(string cadena,int longitud){
    string invertido="";
    if(longitud==0){
        invertido+=cadena[longitud] ;
        return invertido;
    }else{
        invertido+=cadena[longitud] ;
        return invertido + (StringInvertido(cadena,longitud-1));
    }
}

int main() {
string cadena="Cadena";
cout<<StringInvertido(cadena,cadena.length()-1);
}