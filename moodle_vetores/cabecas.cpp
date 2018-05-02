#include <iostream>
using namespace std;

int preencher_vetor_cabeca(int n, int v[]){
    for(int i=0; i<n; i++){
        v[i] = i+1;
    }
}

int imprimir_vetor(int n, int v[]){
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
}

void remover_elemento(int n, int v[], int i){
    for(int j=i; j<=n-2; j++){
        v[j] = v[j+1];
    }
}

int cabecas(int n, int v[], int x){
    int i = x-1;
    while(n > 1){  
        // Mata o próximo
        i++;
        if(i >= n){
            i =0;
        }
        remover_elemento(n, v, i);
        n--;
        
        // Reseta o i
        if(i>=n){
            i=0;
        }
    }
    return v[0];
}

int main(){
    int n, x, v[50];
    cin >> n >> x;
    preencher_vetor_cabeca(n, v);
    cout << cabecas(n, v, x);
    // remover_elemento(n, v, 1);
    // imprimir_vetor(n-1, v);
    return 0;
}