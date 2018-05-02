#include <iostream>
using namespace std;

int main(){
    int n, ano_passado=2, ano_retrasado=2, ano_atual;
    cin >> n;
    if(n==1 || n==2){
        cout << 2;
    }else{
        for(int i=0;i<n-2;i++){
            ano_atual = ano_passado*2 + ano_retrasado*3;
            ano_retrasado = ano_passado;
            ano_passado = ano_atual;
        }
        cout << ano_atual;
    }
}