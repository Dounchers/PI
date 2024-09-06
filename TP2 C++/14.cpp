#include <iostream>
using namespace std;

int main() {
int matriz[3][3]={{1,2,3},{2,1,4},{7,4,1}};
bool simetrica = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = false;
                break;
            }
        }
        if (!simetrica) {
            break;
        }
    }

    // Imprime el resultado
    if (simetrica) {
        cout << "La matriz es simétrica." << endl;
    } else {
        cout << "La matriz no es simétrica." << endl;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<matriz[i][j]<<" ";
            if(j==2){
                cout<<endl;
            }
            }
}
}
