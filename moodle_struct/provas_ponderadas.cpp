#include <iostream>
using namespace std;

struct prova{
    float nota;
    int peso;
};

void ler_notas(int n, struct prova provas[]){
    for(int i=0; i<n; i++){
        cin >> provas[i].nota;
    }
}

void ler_pesos(int n, struct prova provas[]){
    for(int i=0; i<n; i++){
        cin >> provas[i].peso;
    }
}

float calcular_nota(int n, struct prova provas[]){
    float soma_ponderada=0, pesos=0;
    for(int i=0; i<n; i++){
        soma_ponderada += provas[i].nota*provas[i].peso;
        pesos += provas[i].peso;
    }
    return soma_ponderada/pesos;
}

int main(){
    cout << fixed;
    cout.precision(2);
    struct prova provas[50];
    int n;
    cin >> n;
    ler_notas(n, provas);
    ler_pesos(n, provas);
    cout << calcular_nota(n, provas);
    return 0;
}