#include <iostream>
#include <cstring>

using namespace std;
// Retorne o ENDEREÇO da variável do vetor 
// que contém a primeira ocorrência do valor da 
// variável elem.
// Se não existir, retorne NULL.
int * find ( int *vet, int tam, int elem){
    for(int i=0; i< tam; i++){
        if(vet[i]==elem){
            return vet + i;
        }
    }
    return NULL;
}
int main(){
    int v[3] = {1,2,3};
    cout << *find(v, 3, 2);
    cout << find(v, 3, 4);
    return 0;
}