#include <iostream>
#include <string>
using namespace std;
const int MAX_HISTORIA=10;
struct estudiante{
    string nombreApellido;
    int legajo;
    int cantidadInasistencias;
    float calificacion;
};
void MasInasistencias(estudiante arreglo[],int &dl){
    for(int i=0;i<dl;i++){
        if(arreglo[i].cantidadInasistencias>5){
            cout<<arreglo[i].nombreApellido<<endl;
        }
    }
}
int PromedioCurso(estudiante arreglo[],int &dl){
    float suma=0;
    for(int i=0;i<dl;i++){
        suma+=(arreglo[i].calificacion);
    }
    return(suma/dl);
}
void MayorPromedioCurso(estudiante arreglo[],int &dl){
    float promedio=PromedioCurso(arreglo,dl);
    for(int i=0;i<dl;i++){
        if(arreglo[i].calificacion>=promedio){
            cout<<arreglo[i].legajo<<endl;
        }
    }
}
void MayorNueve(estudiante arreglo[],int &dl){
    for(int i=0;i<dl;i++){
        if(arreglo[i].calificacion>=9.0){
            cout<<arreglo[i].legajo<<endl;
        }
    }
}
bool EliminarEstudiante(estudiante arreglo[],int &dl){
    bool encontrado=false;
    int legajoEliminar;
    cout<<"Ingrse legajo a eliminar: ";
    cin>>legajoEliminar;
    for(int i=0;i<dl;i++){
        if(arreglo[i].legajo==legajoEliminar){
            encontrado=true;
            for(int j=i;j<dl-1;j++){
                arreglo[j]=arreglo[j+1];
            }
            dl--;
            break;
        }
    }
    return encontrado;
}
int main(){
int dl=0;
estudiante Historia[MAX_HISTORIA]={};
while(dl<MAX_HISTORIA){
    cout<<"Ingrese nombre: ";
    cin>>Historia[dl].nombreApellido;
    if(Historia[dl].nombreApellido=="ZZZ"){
        break;
    }
    cout<<"Ingrese legajo: ";
    cin>>Historia[dl].legajo;
    cout<<"Ingrese Inasistencias: ";
    cin>>Historia[dl].cantidadInasistencias;
    cout<<"Ingrese calificacion: ";
    cin>>Historia[dl].calificacion;
    dl++;
}
cout<<"Nombre de estudiantes con mas inasistencias: ";
MasInasistencias(Historia,dl);
cout<<"Legajo de los alumnos cuya calificacion promedio es mayor o igual a la calificacion promedio total: "<<endl;
MayorPromedioCurso(Historia,dl);
cout<<"Legajo de aquellos alumnos que tienen promedio mayor o igual a nueve: ";
MayorNueve(Historia,dl);

if(EliminarEstudiante(Historia,dl)){
    cout<<"Estudiante eliminado";
}else{
    cout<<"Estudiante no encontrado";
};

}