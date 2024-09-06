#include <iostream>
using namespace std;

int invertirNumero(int numero){
    int resultado=0;
    while(numero!=0){
        resultado=resultado*10 + numero%10;
        numero=numero/10;
    }
    return resultado;
    }
int SumatoriaDigitos(int numero){
    int suma;
    while (numero!=0){
        suma+=numero%10;
        numero=numero/10;
        
    }
    return suma;
}
bool SonMultiplos(int num1,int num2){
    return(num1%num2==0 || num2 % num1 == 0);
}
int main() {
    char opcion;
    int numero;
    do {
        cout << "Menu de Opciones:" << endl;
        cout << "'A'.Invertir numero" << endl;
        cout << "'B'.Sumatoria digitos" << endl;
        cout << "'C'.Decir si son multiplos" << endl;
        cout << "'D'.Salir" << endl;
        cout << "Elija una opcion: "<<endl;
        cin >> opcion;
        switch (opcion) {
            case 'A':
                cout<<"Ingrese numero a invertir: ";
                cin>>numero;
                cout<<invertirNumero(numero)<<endl;
                break;
            case 'B':
                cout<<"Ingrese numero: ";
                cin>>numero;
                cout<<SumatoriaDigitos(numero)<<endl;
                break;
            case 'C':
                int num1;
                int num2;
                cout<<"Ingrese dos numeros: ";
                cin>>num1;
                cin>>num2;
                cout<<SonMultiplos(num1,num2)<<endl;
                break;
            case 'D':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
        }
    } while (opcion 'D'!= );{}
}