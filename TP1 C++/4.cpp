#include <iostream>
using namespace std;
int main(void){
    long int seg_totales;
    int horas;
    int residuo_horas;
    int minutos;
    int seg_finales;
    cout<<"Ingrese sus segundos: ";
    cin>>seg_totales;
    horas=seg_totales/3600;
    residuo_horas=seg_totales%3600;
    minutos=residuo_horas/60;
    seg_finales=residuo_horas%60;
    cout<<seg_totales<<" segundos "<<"equivalen a: "<<horas<<" horas,"<<minutos<<" minutos y "<<seg_finales<<" segundos.";
}