#include <iostream>
#include <string>
using namespace std;
const int MAX=3;

struct alumno{
    string nombre;
    int notas[3]={};
    };

void CargarAlumnos(alumno estudiantes[],int &dl){
    while(dl<MAX){
        cout<<"Ingrse nombre del alumno: ";
        getline(cin>>ws,estudiantes[dl].nombre);
        cout<<"Ingrse nota del PRIMER trimestre: ";
        cin>>estudiantes[dl].notas[0];
        cout<<"Ingrse nota del SEGUNDO trimestre: ";ED
        cin>>estudiantes[dl].notas[1];
        cout<<"Ingrse nota del TERCER trimestre: ";
        cin>>estudiantes[dl].notas[2];
        dl++;
    }
}

int main(){
int dl=0;
alumno estudiantes[MAX]={};
CargarAlumnos(estudiantes,dl);
    cout << "Estado de los alumnos:" << endl;
    for (int i = 0; i < dl; i++) {
        cout << "Alumno: " << estudiantes[i].nombre << " - ";
        if ((estudiantes[i].notas[0] >= 5) && (estudiantes[i].notas[1] >= 5) && (estudiantes[i].notas[2] >= 5)) {
            cout << "APTO" << endl;
        } else {
            cout << "NO APTO" << endl;
        }
    }
}