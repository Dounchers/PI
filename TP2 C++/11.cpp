//Ejercicio 11.
//Escribir un programa que permita al usuario ingresar números enteros positivos (los números ingresados no
//deben almacenarse). Al finalizar, informar la cantidad de veces que apareció cada dígito (del 0 al 9) en todos los
//números.
//Ejemplo: Si el usuario ingresa los números 1156, 23, 73364, 988, 1003, 5, se debe informar que el 0 apareció 2
//veces, el 1 apareció 3 veces, el 2 apareció 1 vez, el 3 apareció 4 veces, etc.
#include <iostream>
using namespace std;
int cero = 0, uno = 0, dos = 0, tres = 0, cuatro = 0, cinco = 0, seis = 0, siete = 0, ocho = 0, nueve = 0;
int main() {
    do{
        int num;
        int digito;
        cout<<"Ingrese numero: ";
        cin>>num;
        if(num<0){
            break;
        }
        while(num!=0){
            digito=num%10;
            num=num/10;
            switch (digito){
                case 0:
                    cero+=1;
                    break;
                case 1:
                    uno+=1;
                    break;
                case 2:
                    dos+=1;
                    break;
                case 3:
                    tres+=1;
                    break;
                case 4:
                    cuatro+=1;
                    break;
                case 5:
                    cinco+=1;
                    break;
                case 6:
                    seis+=1;
                    break;
                case 7:
                    siete+=1;
                    break;
                case 8:
                    ocho+=1;
                    break;
                case 9:
                    nueve+=1;
                    break;
                default:
                    break;
                }
                
            }
    } while (true);
    
    cout << "Cantidad de veces que apareció cada dígito:" << endl;
    cout << "0: " << cero << " veces" << endl;
    cout << "1: " << uno << " veces" << endl;
    cout << "2: " << dos << " veces" << endl;
    cout << "3: " << tres << " veces" << endl;
    cout << "4: " << cuatro << " veces" << endl;
    cout << "5: " << cinco << " veces" << endl;
    cout << "6: " << seis << " veces" << endl;
    cout << "7: " << siete << " veces" << endl;
    cout << "8: " << ocho << " veces" << endl;
    cout << "9: " << nueve << " veces" << endl;
    }
