#include <iostream>
using namespace std;

int ProductoComoSuma(int factor1,int factor2){
    if(factor2==1){
        return factor1;
    }else{
        return (factor1 + ProductoComoSuma(factor1,factor2-1));
    }
}

int main() {
cout<<ProductoComoSuma(2,3);   
}