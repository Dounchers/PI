#include <iostream>
using namespace std;
bool esBisiesto(int anio){
    return((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0));
}
int main(){
    if(esBisiesto(2000)){
        cout<<"Es bisiesto.";
    }else{
        cout<<"No es bisiesto.";
    }
}