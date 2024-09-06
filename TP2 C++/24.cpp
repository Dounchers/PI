#include <iostream>
#include <string>
using namespace std;
const int MAX_REGISTRO=20;

struct ciudadano{
string nombreApellido;
long int FechaDeNacimiento;
string direccion;
int numeroDocumento;
int tipoDeDocumento;
char sexo;
};
void cargarCiudadanos(ciudadano arreglo[],int &dl){
    while(dl<MAX_REGISTRO){
        cout<<"Ingrese nombre y apellido (ingrese 'ZZZ' para cortar la carga): ";
        cin>>arreglo[dl].nombreApellido;
        if(arreglo[dl].nombreApellido=="ZZZ"){
            break;
        }
        cout<<"Ingrese fecha de nacimiento: ";
        cin>>arreglo[dl].FechaDeNacimiento;
        do{
            cout<<"1 - DNI, 2 - Pasaporte, 3 - Otro" << endl;
            cout<<"Ingrese tipo de documento: ";
            cin>>arreglo[dl].tipoDeDocumento;

            if (arreglo[dl].tipoDeDocumento < 1 || arreglo[dl].tipoDeDocumento > 3) {
                cout << "TIPO DE DOCUMENTO INVÁLIDO. VUELVA A INGRESAR..." << endl;
            }
        } while (arreglo[dl].tipoDeDocumento < 1 || arreglo[dl].tipoDeDocumento > 3);
        cout<<"Ingrese numero de documento: "<<endl;
        cin>>arreglo[dl].numeroDocumento;
        cout<<"Ingrese sexo(M/F): "<<endl;
        cin>>arreglo[dl].sexo;
        dl++;
    }
}
void ImprimirRegistro(ciudadano arreglo[],int &dl){
    for(int i=0;i<dl;i++){
        cout<<"Nombre y apellido: "<<arreglo[dl].nombreApellido<<endl;
        cout<<"Direccion: "<<arreglo[dl].direccion<<endl;
        int anio=arreglo[dl].FechaDeNacimiento/1000;
        int mes=(arreglo[dl].FechaDeNacimiento/100)%100;
        int dia=arreglo[dl].FechaDeNacimiento%100;
        cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
        cout<<"Tipo de documento: "<<endl;
        if(arreglo[dl].tipoDeDocumento==1){
            cout<<"DNI: "<<arreglo[dl].numeroDocumento<<endl;
        }
        if(arreglo[dl].tipoDeDocumento==2){
            cout<<"Pasaporte: "<<arreglo[dl].numeroDocumento<<endl;
        }
        else{cout<<"Otro: "<<arreglo[dl].numeroDocumento;
        }
        if(arreglo[dl].sexo='M'){
            cout<<"Sexo: Masculino."<<endl;
        }else{
            cout<<"Sexo: Femenino."<<endl;
        }
    }

}
int main() {
int dl=0;
ciudadano registro[MAX_REGISTRO]={};
cargarCiudadanos(registro,dl);
ImprimirRegistro(registro,dl);
}