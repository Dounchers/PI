#include <iostream>
using namespace std;
bool anio(int ingreso){
    if ((ingreso / 10000 > 1950) && (ingreso / 10000 < 2024)){
    return true;
    }else;{
        return false;
    }
}
bool mes(int ingreso){
    int valorMes = (ingreso / 100) % 100;
    if (valorMes >= 1 && valorMes <= 12){
    return true;}
    else{
        return false;
    }
}

bool dia(int ingreso){
    int valorDia = ingreso % 100;
    if (valorDia >= 1 && valorDia <= 31){
        return true;
        }else{
            return false;
        }
    
}
int main(void){
    int ingreso;
    int AAAA;
    int MM;
    int DD;
    cout<<"Ingrese fecha: ";
    cin>>ingreso;    
    while(true){
        if(anio(ingreso)&&mes(ingreso)&&dia(ingreso)){
        AAAA=ingreso/10000;
        MM=(ingreso/100)%100;
        DD=ingreso%100;
        break;
        }else{
        cout<<"Ingrese fecha válida: ";
        cin>>ingreso;  
        continue;
        }
        
    }
    cout<<AAAA<<"/"<<MM<<"/"<<DD; 
}