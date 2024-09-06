#include <iostream>
using namespace std;
const int FILA=3;
const int COLUMNA=3;
bool asientosLibres(int matriz[][COLUMNA]){
    int ocupados=0;
    for (int i = 0; i < FILA; i++) {
        for (int j = 0; j < COLUMNA; j++) {
            if(matriz[i][j]==0){
                cout<<"Libre"<<" ";
                if(j==COLUMNA-1){
                    cout<<endl;
                }
            }else{
                cout<<"OCUPADO"<<" ";
                ocupados+=1;
                if(j==COLUMNA-1){
                    cout<<endl;
                }
            }
        }
    }
    if(ocupados<FILA*COLUMNA){
        return true;
    }else{
        cout<<"TODOS LOS ASIENTOS ESTAN OCUPADOS."<<endl;
        return false;
    };
}
bool IngresarAsiento(int matriz[][COLUMNA]){
    int filaVendida;
    int columnaVendida;
    cout<<"Ingrese fila que desee comprar: ";
    cin>>filaVendida;
    while(filaVendida<0 or filaVendida>(FILA-1)){
        cout<<"Fila no válida.Vuelva a ingresar."<<endl;
        cin>>filaVendida;
    }
    cout<<"Ingrese columna que desee comprar: ";
    cin>>columnaVendida;
    while(columnaVendida<0 or columnaVendida>(COLUMNA-1)){
        cout<<"Columna no válida.Vuelva a ingresar."<<endl;
        cin>>columnaVendida;
    }
    for(int i=0;i<FILA;i++){
        if(i==filaVendida){//si encunetro la fila en la que se vendio, empiezo a bsucar las columnas
            for(int j=0;j<COLUMNA;j++){
                if(j==columnaVendida){
                    if(matriz[i][j]!=1){
                        matriz[i][j]=1;
                        cout<<"VENDIDO"<<endl;
                        return true;
                    }else{
                        cout<<"Asiento ocupado, ingrese otro."<<endl;
                        return false;
                    }
                }
            }
        }
    }
}



int main() {
int asientos[FILA][COLUMNA]={};

while(asientosLibres(asientos)){
(IngresarAsiento(asientos));
}
}