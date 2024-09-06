#include <iostream>
#include <string>
using namespace std;

int main() {
std::string cadena;
std::string anedac;
std::cout<<"Ingrese cadena: ";
std::getline(std::cin,cadena);
for(int i = cadena.length() - 1; i >= 0; --i){
    anedac+=cadena[i];
}
cout<<"La cadena en orden inverso es: "<<anedac;
}