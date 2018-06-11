#include <iostream>

using namespace std;

void inverte(int vet[], int tam){
    if(tam <= 1){
        return;
    }
    int aux = vet[0];
    vet[0] = vet[tam-1];
    vet[tam-1] = aux;
    inverte(vet+1, tam-2); 
}


//faça uma função que inverta a ordem do vetor inicial.
void inverte1(int vet[], int inicial, int final){
    if(inicial >= final){
        return;
    }
    int aux = vet[inicial];
    vet[inicial] = vet[final];
    vet[final] = aux;
    inverte1(vet, inicial+1, final-1);
}

void imprimir_vetor(int *vet, int n){
    for(int i=0; i<n; i++){
        cout << vet[i] << " ";
    }
}

int main(){
    int v[6] = {1,2,3,4,5,6};
    inverte(v, 6);
    // cout << *(v+1);
    imprimir_vetor(v, 6);
}