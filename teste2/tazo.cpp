#include <iostream>
using namespace std;

void ler_vetor(int n, int v[]){
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
}

void tazo(int n, int v[]){
    int cont =0, max=0;
    for(int i=0; i<n; i++){
        if(i>0 && v[i] != v[i-1]){
            cont=0;
        }
        cont++;
        if(cont > max){
            max = cont;
        }
    }
    cont =0;
    for(int i=0; i< n; i++){
        if(i>0 && v[i]!=v[i-1]){
            cont = 0;
        }
        cont ++;
        if(cont == max){
            cout << v[i] << " ";
        }
    }
}

int main(){
    int v[50], n;
    cin >> n;
    ler_vetor(n, v);
    tazo(n,v);
    return 0;
}