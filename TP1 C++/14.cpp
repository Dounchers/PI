//Implementar un programa que solicite una palabra y verifique si es palíndromo. 
//Una palabra es palíndromo si puede leerse igual de izquierda a derecha que de derecha a izquierda.
//Precondición: todos los caracteres son minúsculas y no se ingresarán vocales acentuadas ni diéresis.
#include <iostream>
#include <string>
using namespace std;
bool esPalindroma(string palabra){
    string palabra2;
    for(int i = palabra.length() - 1; i >= 0; --i){//Recorro la palabra al revés
        palabra2+=palabra[i];
    }
return(palabra==palabra2);
}

int main() {
string palabra;
cout<<"Ingrese palabra: ";
getline(cin,palabra);
cout<<esPalindroma(palabra);
}