#include <iostream>
using namespace std;

void ler_vetor(int n, int v[]){
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
}

void bubble_sort(int n, int v[]){
    int aux;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void imprimir_vetor(int n, int v[]){
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
}

int main(){
    int v[50], n;
    cin >> n;
    ler_vetor(n, v);
    bubble_sort(n, v);
    imprimir_vetor(n, v);
    return 0;
}