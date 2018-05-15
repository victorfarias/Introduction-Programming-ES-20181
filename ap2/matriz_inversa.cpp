#include <iostream>

using namespace std;

void ler_matriz(int m[5][5]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> m[i][j];
        }
    }
}

void imprimir_matriz(int m[5][5]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout << m[i][j];
            if(j != 4){
                cout << " ";
            }
        }
        cout << endl;
    }
}

void inverter_matriz(int m[5][5]){
    int aux_m[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            aux_m[i][j] = m[4-j][4-i];
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            m[i][j] = aux_m[i][j];
        }
    }
}

int main(){
    int m[5][5];
    ler_matriz(m);
    inverter_matriz(m);
    imprimir_matriz(m);
    return 0;
}