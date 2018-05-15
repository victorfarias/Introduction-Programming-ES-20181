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

void shift(int n, int v[]){
    int aux = v[n-1];
    for(int i=n-1; i>=1; i--){
        v[i] = v[i-1];
    }
    v[0] = aux;
}

int main(){
    int v[50], n;
    cin >> n;
    ler_vetor(n, v);
    shift(n, v);
    imprimir_vetor(n, v);
    return 0;
}