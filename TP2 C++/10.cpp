//Escribir un programa que permita al usuario gestionar los pagos de la cuota de un club.
//a) Para ello, almacenar en un arreglo los números de DNI de los socios que pagaron. El club no tiene más
//de 200 socios.
//b) Permitir al usuario buscar un DNI en el arreglo y, si el DNI está en el arreglo, imprimir "Cuota al día". Si
//no está, imprimir "Socio con deuda".
//c) También se debe permitir al usuario eliminar un DNI del arreglo, en caso de haberlo ingresado
//erróneamente.
//d) Finalmente, imprimir todo el arreglo.

#include <iostream>
using namespace std;
int const MAX=200; //DECLARO CONSTANTE PARA LA DIMENSION FISICA DEL ARREGLO QUE ME INDICA LA CONSIGNA 
void imprimirArreglo(int arreglo[], int dl) {
    for (int i = 0; i < dl; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}
void CargarSocios(int arreglo[],int &dl){//le paso por referencia para que dl siempre tome el último dni ingresado y de ahíse sigan cargando
    int dni;
    cout<<"Ingrese DNI: ";
    cin>>dni;
    while(dni!=0 and dl<MAX){
        int i=dl; //uso dl para recorrer
        arreglo[i]=dni;
        dl+=1;
        cout<<"Ingrese DNI: ";
        cin>>dni;
    }
} 
bool alDia(int arreglo[],int &dl){
    int dniABuscar;
    cout<<"Ingrese DNI a buscar: ";
    cin>>dniABuscar;
    for(int i=0;i<dl-1;i++){
        if(dniABuscar==arreglo[i]){
            return true;
        }
    }
    return false;
}
void eliminarDni(int arreglo[],int &dl){
    int indice=-1;
    int eliminar;
    cout<<"Ingrese DNI a eliminar: ";
    cin>>eliminar;
    for(int i=0;i<dl-1;i++){
        if(arreglo[i]==eliminar){
            indice=i;
            break;
        }
    }
    if(indice!=-1){
        for(int i=indice;i<dl-1;i++){
            arreglo[i]=arreglo[i+1]; //corrimiento de los elementos a la izquierda tomando el lugar del valor eliminado
        }
    }
    dl-=1; //La dimensión lógica cambia porque ahora hay un lugar disponible al final
}
int main() {
int socios[MAX]={};
int dl=0;

CargarSocios(socios,dl);
imprimirArreglo(socios,dl);

if(alDia(socios,dl)){
    cout<<"Socio al dia."<<endl;
}else{
    cout<<"Socio con deuda."<<endl;
}

eliminarDni(socios,dl);

imprimirArreglo(socios,dl);

}