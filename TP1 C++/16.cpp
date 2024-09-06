#include <iostream>
using namespace std;
bool perteneceRecta(int X,int Y){
    return(Y==3*X+2);
}
#include <iostream>
using namespace std;

int main() {
    cout<<"Ingrese coordenada en X: ";
    int X;
    cin>>X;
    cout<<"Ingrese coordenada en Y: ";
    int Y;
    cin>>Y;
    if(perteneceRecta(X,Y)){
        cout<<"Las coordenadas pertenecen a la recta.";
    }else{
        cout<<"Las coordenadas NO pertenecen a la recta.";
    }
}