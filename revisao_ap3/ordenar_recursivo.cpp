#include <iostream>
using namespace std;

// Ordene um vetor de strings, sendo que cada caráter está em minúsculo.
void sort_string( char vet[], int tam){
    if(tam<=1){
        return;
    }
    int i_maior = 0;
    for(int i=1; i<tam; i++){
        if(vet[i] > vet[i_maior]){
            i_maior = i;
        }
    }

    int aux = vet[i_maior];
    vet[i_maior] = vet[tam-1];
    vet[tam-1] = aux;
    sort_string(vet, tam-1);
}

int main(){
    char s[7] = {'a','d','b','f','h','a','\0'};
    sort_string(s, 6);
    cout << s;
    return 0;
}