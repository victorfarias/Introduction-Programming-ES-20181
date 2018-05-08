#include <iostream>
using namespace std;

void ler_vetor(int n, int v[]){
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
}

int casamento(int n, int v[]){
    int casais = 0;
    int casados[50];
    for(int i=0; i<n; i++){
        casados[i]=0;
    } 
    for(int i=0; i<n; i++){
        if(casados[i]==0){
            for(int j=i+1; j<n; j++){
                if(casados[j]==0 && v[i] == v[j]*-1){
                    casais ++;
                    casados[i] = 1;
                    casados[j] = 1;
                    break;
                }
            }
        }   
    }
    return casais;
}

int main(){
    int n, zoo[50];
    cin >> n;
    ler_vetor(n, zoo);
    cout << casamento(n, zoo);
    return 0;
}