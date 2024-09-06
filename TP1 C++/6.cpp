#include <iostream>
using namespace std;
int main(void){
int n;
float suma=0;
    cout<<"Ingrese n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        suma+=(1.0/i);
        }
cout<<suma;
} 