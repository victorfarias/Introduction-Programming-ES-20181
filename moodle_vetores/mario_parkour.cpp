#include <iostream>
using namespace std;

void ler_vetor(int n, int v[]){
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
}

int parkour(int n, int v[]){
    int qtd_parkour = 0;
    for(int i=0; i<n-1; i++){
        int distancia = v[i]-v[i+1];
        if(distancia<0){
            distancia *=-1;
        }
        if(distancia>1){
            qtd_parkour++;
        }
    }
    return qtd_parkour;
}

int main(){
    int n, v[50];
    cin >> n;
    ler_vetor(n, v);
    cout << parkour(n, v);
    return 0;
}