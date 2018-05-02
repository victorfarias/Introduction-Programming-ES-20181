#include <iostream>
using namespace std;

int main(){
    int num, digito, soma=0;
    cin >> num;
    while(num!=0){
        digito = num%10;
        num = num/10;
        soma = soma + digito;
    }
    cout << soma;
}