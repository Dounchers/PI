//Escribir un programa que visualice el más grande, el más pequeño y el promedio de N números enteros.
//El valor de N se solicita al usuario al comienzo del programa y luego se le permite introducir los números.
#include <iostream>
using namespace std;
int main(void){
int cant;
int n;
int mayor;
int menor;
float promedio=0;

cout<<"Ingrese cantidad a procesar: ";
cin>>cant;
cout<<"Ingrese numero: "; //Primero necesito evaluar el primer n para evitar que si mete n mayores a cero me tome como "menor" el 0 ÍDEM PARA MENORES
cin>>n;
mayor=n;
menor=n;
promedio+=n;

for(int i=2;i<=cant;i++){ 
    cout<<"Ingrese numero: ";
    cin>>n;
    if (n>mayor){
        mayor=n;
        }
    if(n<menor){
        menor=n;
        }
    promedio+=n;
    }
cout<<"El mayor numero es; "<<mayor<<endl;
cout<<"El menor numero es; "<<menor<<endl;
cout<<"El promedio es; "<<abs(promedio)/cant;
}