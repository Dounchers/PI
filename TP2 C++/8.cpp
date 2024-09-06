//Escribir una función llamada cantidad_ocurrencias que reciba como parámetro un arreglo de tipo int, un
//parámetro con la dimensión lógica del arreglo y un parámetro con un valor de tipo int. La función debe retornar
//la cantidad de ocurrencias del valor int encontradas en el arreglo.
#include <iostream>
#include <string>
using namespace std;
const int MAX = 10;
//Colocar acá la función cantidad_ocurrencias
int cantidad_ocurrencias(int arreglo[],int dl,int n){
int cant=0;
for(int i=0;i<dl;i++){
    if(arreglo[i]==n){
        cant+=1;
    }
}
return cant;
}

int main() {
int A[MAX] = {2,8,5,2,2,7,2,7,4,2};
int B[MAX];
int C[MAX] = {2};
int D[MAX] = {2,2,2};
int E[MAX] = {1,3,5,7,9};
int dlA=10, dlB=0, dlC=1, dlD=3, dlE=5;
cout << cantidad_ocurrencias(A, dlA, 2) << endl;
cout << cantidad_ocurrencias(B, dlB, 2) << endl;
cout << cantidad_ocurrencias(C, dlC, 2) << endl;
cout << cantidad_ocurrencias(D, dlD, 2) << endl;
cout << cantidad_ocurrencias(E, dlE, 2) << endl;
}