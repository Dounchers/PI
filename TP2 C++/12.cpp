#include <iostream>
using namespace std;
int main() {
    bool digitos[10] = {false}; // Inicializar todos los dígitos como "no apareció"

    cout << "Ingrese números enteros positivos (ingrese -1 para finalizar):" << endl;

    int numero;
    do {
        cout << "Ingrese número: ";
        cin >> numero;

        if (numero == -1) {
            break; // Salir del bucle si se ingresa -1
        }

        while (numero != 0) {
            int digito = numero % 10;
            digitos[digito] = true; // Marcar el dígito como "apareció"
            numero = numero / 10;
        }
    } while (true);

    cout << "Dígitos que aparecieron:" << endl;
    for (int i = 0; i < 10; i++) {
        if (digitos[i]) {
            cout << i << " apareció" << endl;
        } else {
            cout << i << " no apareció" << endl;
        }
    }

    return 0;
}