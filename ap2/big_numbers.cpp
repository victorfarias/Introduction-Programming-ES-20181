#include <iostream>

using namespace std;

void ler_vetor(int n, int v[]){
    for(int i =0; i<n; i++){
        cin >> v[i];
    }
}

void imprimir_vetor(int n, int v[]){
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
}

int soma(int n, int v1[], int v2[], int out[]){
    int vai_um = 0;
    for(int i=n-1; i>=0; i--){
        int soma = v1[i] + v2[i] + vai_um;
        if(soma >= 10){
            out[i] = soma - 10;
            vai_um = 1;
        }else{
            out[i] = soma;
            vai_um = 0;
        }
    }
    if(vai_um == 1){
        for(int i=n-1; i>=0; i--){
            out[i+1] = out[i];
        }
        out[0] = vai_um;
        return n+1;
    }else{
        return n;
    }
}

int main(){
    int v1[100], v2[100], resultado[100], n, novo_n;
    cin >> n;
    ler_vetor(n, v1);
    ler_vetor(n, v2);
    novo_n = soma(n, v1, v2, resultado);
    imprimir_vetor(novo_n, resultado);
    return 0;
}