#include <iostream>
using namespace std;
bool esBisiesto(int anio){
    return((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0));
 } 

///
int main(){
cout<<"Ingrese anio: ";
int anio;
int transcurridos;
cin>>anio;
int dia= 1;
int mes= 1;
if(esBisiesto(anio)){ //PRIMERO EL PROGRAMA SE BIFURCA EN SI EL AÑO ES BISIESTO O NO, SI ES, LO OBLIGO A INGRESAR UN NUMERO MENOR A 366 INCLUSIVE.
    do{               //SI NO ES LO OBLIGO A INGRESAR UN NUMERO MENOR A 365 INCLUSIVE.
    cout<<"Ingrese dias validos: ";
    cin>>transcurridos;
    }while(transcurridos>366 or transcurridos<1);{
    }
}else{
    do{cout<<"Ingrese dias validos: ";
    cin>>transcurridos;
    }while(transcurridos>365 or transcurridos<1);{
    }}

while(transcurridos!=0){
    if(dia==29 and mes==2 and (!esBisiesto(anio))){
        dia=1;
        mes+=1;  
    }
    if(dia==30 and mes==2 and esBisiesto(anio)){
        dia=1;
        mes+=1;  
    }
    if((dia==31)and (mes==4 or mes==6 or mes==9 or mes==11)){
        dia=1;
        mes+=1;
    }
    if((dia==32)and mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12)){
        dia=1;
        mes+=1;
    }
    dia+=1;
    transcurridos-=1;
}
cout<<dia<<"/"<<mes<<"/"<<anio;
}
