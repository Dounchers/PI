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
for(int i=1;i<=cant;i++){ 
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
