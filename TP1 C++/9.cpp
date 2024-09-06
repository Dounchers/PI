#include <iostream>
#include <string>
using namespace std;

int main(){
char letra;

do{
    cout<<"Ingrese una letra: ";
    cin>>letra;
    letra = tolower(letra);
    }while(letra!='s' && letra!='n');
if(letra=='s'){
    cout<<"Usted eligió SI";
    } else if (letra == 'n') {
        cout << "Usted eligió NO";
    }
}
