#include <iostream>
using namespace std;

void ler_matriz(int mat[][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> mat[i][j];
        }
    }
}

int soldados(int m[][3]){
    int trocas =0;
    for(int j=0; j<3; j++){
        for(int i=0; i<2; i++){
            if(m[i][j] < m[i+1][j]){
                trocas ++;
            }
        }
    }
    return trocas;
}

int main(){
    int sold[3][3];
    ler_matriz(sold);
    cout << soldados(sold);
    return 0;
}