#include <iostream>
#include <string>
using namespace std;

int main() {
std::string cadena;
int contador;
std::cout<<"Ingrese cadena: ";
std::getline(std::cin,cadena);
for(int i=0;i<=cadena.length()-1;i++){
    if(cadena[i]!=' '){
        contador+=1;
        }
    else{
        contador=0;
    }
}
cout<<contador;
}