#include <iostream>
using namespace std;

void ler_matriz(int n, int m, int mat[][3]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
}

int quadrado_magico(int n, int m, int mat[][3]){
    int base =0;
    for(int i=0; i<n; i++){
        base += mat[i][i];
    }
    int soma =0;
    for(int i =0; i<n; i++){
        soma += mat[i][n-i-1];
    }
    if(soma != base){
        return 0;
    }

    for(int i=0; i<n; i++){
        soma =0;
        for(int j=0; j<m; j++){
            soma += mat[i][j];
        }
        if(soma != base){
            return 0;
        }
    }

    for(int j=0; j<m; j++){
        soma =0;
        for(int i=0; i<n; i++){
            soma += mat[i][j];
        }
        if(soma != base){
            return 0;
        }
    }
    return 1;
}

int main(){
    int m[3][3];
    ler_matriz(3, 3, m);
    if(quadrado_magico(3, 3, m)==1){
        cout << "sim";
    }else{
        cout << "nao";
    }
    return 0;
}