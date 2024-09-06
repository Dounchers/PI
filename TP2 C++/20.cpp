#include <iostream>
#include <string>
using namespace std;
const int MAX=20;
struct libro{   
    string titulo;
    string autor;
    string ISBN;
    string editorial;
    int cantidadHojas;
    };

void cargarLibros(libro biblioteca[],int &dl){
do{
    cout<<"Titulo: ";
    getline(cin>>ws,biblioteca[dl].titulo);
    cout<<"Autor: ";
    getline(cin>>ws,biblioteca[dl].autor);
    cout<<"ISBN: ";
    getline(cin>>ws,biblioteca[dl].ISBN);
    cout<<"Editorial: ";
    getline(cin>>ws,biblioteca[dl].editorial);
    cout<<"Cantidad de Hojas: ";
    cin>>biblioteca[dl].cantidadHojas;
    dl++;
}while(dl<MAX && biblioteca[dl-1].titulo!="El hobbit");
};

int main(){
libro biblioteca[MAX]={};
int dl=0;
cargarLibros(biblioteca,dl);
cout << "\nLibros almacenados:" << endl;
    for (int i = 0; i < dl; i++) {
        cout << "Libro #" << i + 1 << ":" << endl;
        cout << "Titulo: " << biblioteca[i].titulo << endl;
        cout << "Autor: " << biblioteca[i].autor << endl;
        cout << "ISBN: " << biblioteca[i].ISBN << endl;
        cout << "Editorial: " << biblioteca[i].editorial << endl;
        cout << "Cantidad de Hojas: " << biblioteca[i].cantidadHojas << endl;
        cout << "-------------------------" << endl;
    }
}