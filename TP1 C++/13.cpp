#include <iostream>
#include <string>
using namespace std;

int main(){
string cadena;
cout<<"Ingrese cadena: ";
getline(cin,cadena);
string cadena2;
cadena2+=toupper(cadena[0]);
for(int i=1;i<=cadena.length()-1;i++){
    cadena2+=tolower(cadena[i]);
}
cout<<cadena2;
}