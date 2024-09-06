#include <iostream>
#include <string>
using namespace std;
const int CIUDADES=4;
const int DIAS=3;
void CargarInvitados(int invitados[][DIAS],string NombreCiudades[]){
    for(int i=0;i<CIUDADES;i++){
        for(int j=0;j<DIAS;j++){
            cout<<"Ingrese cantidad de invitados en la ciudad de "<<NombreCiudades[i]<<" en el dia "<<j+1<<endl;
            cin>>invitados[i][j];
        }
    }

}
void imprimirMatriz(int matriz[][DIAS],string NombreCiudades[]) {
    cout<< "--------------DIA 1 || DIA 2 || DIA 3 ||---------:"<<endl;
    for (int i = 0; i <CIUDADES; i++) {
        cout << "Ciudad " << NombreCiudades[i] << ": ";
        for (int j = 0; j <DIAS; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
void InvitadosTotales(int invitados[][DIAS],string NombreCiudades[]){
    for(int i=0;i<CIUDADES;i++){
    int totalDias=0;
    for(int j=0;j<DIAS;j++){
        totalDias+=invitados[i][j];
    }
    cout<<"La cantidad total de invitados en "<<NombreCiudades[i]<<" es de: "<<totalDias<<endl;
    }
}
void BuscarCiudad(int invitados[][DIAS],string ciudades[]){
    string ciudadBuscar;
    cout<<"Ingrese ciudad a buscar: ";
    cin>>ciudadBuscar;
    for(int i=0;i<CIUDADES;i++){
        if(ciudades[i]==ciudadBuscar){
            for(int j=0;j<DIAS;j++){
                cout<<"La cantidad de invitados en: "<<ciudadBuscar<<" en el dia "<<j+1<<" es de: "<<invitados[i][j]<<endl;
            }
        }
    }

}


int main() {
string NombreCiudades[CIUDADES]={"Twin","Forella","Doriath","Aerilon"};
int invitados[CIUDADES][DIAS]={};
CargarInvitados(invitados,NombreCiudades);
imprimirMatriz(invitados,NombreCiudades);
InvitadosTotales(invitados,NombreCiudades);
invitados[3][0]-=50;
BuscarCiudad(invitados,NombreCiudades);
 
}