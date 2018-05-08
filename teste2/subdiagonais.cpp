#include <iostream>
using namespace std;

void ler_matriz(int mat[][5]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> mat[i][j];
        }
    }
}

int subdiagonais(int mat[][5]){
    int principal=0, secundaria=0;
    for(int i=0; i<5; i++){
        principal += mat[i][i];
        secundaria += mat[i][4-i];
    }
    return principal - secundaria;
}

int main(){
    int mat[5][5];
    ler_matriz(mat);
    cout << subdiagonais(mat);
    return 0;
}