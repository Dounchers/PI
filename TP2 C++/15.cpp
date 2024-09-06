#include <iostream>
using namespace std;

int main() {
int fila=2;
int columna=2;
int matrizResultante[fila][columna]={};
int matrizA[fila][columna]={};
int matrizB[fila][columna]={};
for(int i=0;i<fila;i++){
    for(int j=0;j<columna;j++){
        cout<<"Ingrese elemento de la matriz A en indice:"<<i<<j<<endl;
        cin>>matrizA[i][j];
    }
}
for(int i=0;i<fila;i++){
    for(int j=0;j<columna;j++){
        cout<<"Ingrese elemento de la matriz B en indice:"<<i<<j<<endl;
        cin>>matrizB[i][j];
    }
}
for(int i=0;i<fila;i++){
    for(int j=0;j<columna;j++){
        matrizResultante[i][j]=matrizA[i][j]+matrizB[i][j];
    }
}
cout<<"Matriz A+B: "<<endl;
 for (int i = 0; i < fila; i++) {
    for (int j = 0; j < columna; j++) {
    cout<<matrizResultante[i][j]<<" ";
    if(j==columna-1){
        cout<<endl;
        }
     }
}

}