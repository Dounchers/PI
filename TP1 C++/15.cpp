#include <iostream>
using namespace std;
int cantidadVocales(string cadena){
 int contador=0;
    for(int i=0 ; i<cadena.length(); i++){
        if(cadena[i]=='A' or cadena[i]=='E' or cadena[i]=='I' or cadena[i]=='O' or cadena[i]=='U' 
        or cadena[i]=='a' or cadena[i]=='e' or cadena[i]=='i' or cadena[i]=='o' or cadena[i]=='u'){
            contador+=1;
        }
    }
 return(contador);
}
int contar(string cadena,char caracter){
    int contador=0;
    for(int i=0;i<cadena.length();i++){
        if(caracter==cadena[i]){
            contador+=1;
        }
    }
    return(contador);
}
string caracteresPares(string cadena){
    string Pares;
    for(int i=0;i<cadena.length();i++){
        if(i%2==0){
            Pares+=cadena[i];
        }
    }
    return(Pares);
} 


int main(){
    cout<<cantidadVocales("Mutacio")<<endl;
    cout<<contar("Ajedrez",'e')<<endl;
    cout<<caracteresPares("Hola");
}