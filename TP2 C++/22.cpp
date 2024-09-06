//Realizar un programa que almacene en un arreglo la lista de invitados a una fiesta. El salón donde se realizará
//tiene capacidad máxima para 150 personas.
//De cada invitado se conoce nombre, apellido, sexo y edad. Se ingresarán datos hasta que el nombre sea igual a
//“ZZZ” o hasta que la capacidad del salón esté completa.
//Una vez finalizada la carga:
//a) Informar la cantidad de invitados que asistirán a la fiesta.
//b) Realizar una función que liste los nombres de las mujeres cuya edad sea <= 20.
//c) Realizar una función que, dado un apellido y nombre, permita eliminar un invitado en caso de no poder asistir.

#include <iostream>
#include <string>
const int Invitados_MAX=150;
using namespace std;

struct invitado{
    string nombre;
    string apellido;
    string sexo;
    int edad;
};

void mujeresMenores(invitado arreglo[],int &dl){
    for(int i=0;i<dl;i++){
        if((arreglo[i].sexo=="Femenino")&&(arreglo[i].edad<=20)){
            cout<<arreglo[i].nombre<<","<<endl;
        }
    }
}
void EliminarInvitado(invitado arreglo[],int &dl){
    string nombreEliminar;
    string apellidoEliminar;
    cout<<"Ingrese nombre a eliminar: ";
    cin>>nombreEliminar;
    cout<<"Ingrese apellido a eliminar: ";
    cin>>apellidoEliminar;
    int indice;
    bool eliminado=false;
    for(int i=0;i<dl;i++){
        if((arreglo[i].nombre==nombreEliminar) && (arreglo[i].apellido==apellidoEliminar)){
            eliminado=true;
            indice=i; //encuentro el elemento entonces parto del indice y muevo a la izquierda
            for(int j=indice;j<dl-1;j++){
                arreglo[j]=arreglo[j+1]; //corrimiento de los elementos a la izquierda tomando el lugar del valor eliminado
            }
            dl--;
            break;
         }
    }
    if(eliminado){
        cout<<"Invitado eliminado.";
    }else{
        cout<<"No se ha encontrado invitado.";
    }
}



int main(){
invitado lista[150]={};
int dl=0;
while(dl<Invitados_MAX){
    cout<<"Ingrese nombre: "<<endl;
    cin>>lista[dl].nombre;
    if(lista[dl].nombre=="ZZZ"){
        break;
    }
    cout<<"Ingrese apellido: "<<endl;
    cin>>lista[dl].apellido;
    cout<<"Ingrese sexo (M o F): "<<endl;
    cin>>lista[dl].sexo;
    cout<<"Ingrese edad: "<<endl;
    cin>>lista[dl].edad;
    dl++;
}          
cout<<"La cantidad de invitados es de: "<<dl<<endl;
mujeresMenores(lista,dl);
EliminarInvitado(lista,dl);




}