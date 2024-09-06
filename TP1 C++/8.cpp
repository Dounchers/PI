//Leer una secuencia de caracteres que finaliza con la letra minúscula 'n', la cual debe ser procesada. 
//Contabilizar la cantidad de cada una de las letras vocales minúsculas. 
//También informar la cantidad de caracteres leídos en total y el porcentaje de letras vocales minúsculas encontradas en la secuencia.
#include <iostream>
#include <string>
using namespace std;

int main(void){
std::string miCadena;
int Vocales=0;
int CaracteresLeidos=0;
float Porcentaje;
char letra;

do{
    cout<<"ingrese letra; ";
    cin>>letra;
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        Vocales+=1;
    }
    CaracteresLeidos+=1;
    miCadena+=letra;
}while(letra!='n');


Porcentaje=Vocales*100/CaracteresLeidos;
cout<<"Cantidad de vocales minusculas; "<<Vocales<<endl;
cout<<"Caracteres leidos; "<<CaracteresLeidos<<endl;
cout<<Porcentaje<<"%"<<" vocales encontradas en "<<miCadena;
}