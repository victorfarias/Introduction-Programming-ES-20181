#include <iostream>
using namespace std;

void ler_matriz(int n, int m, int mat[][3]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
}

int simetrica(int n, int m, int mat[][3]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] != mat[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int m[3][3];
    ler_matriz(3, 3, m);
    if(simetrica(3, 3, m) ==1){
        cout << "sim";
    }else{
        cout << "nao";
    }

}