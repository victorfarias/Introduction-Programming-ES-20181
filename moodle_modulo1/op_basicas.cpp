#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed;
    cout << setprecision(2);

    int num1, num2;
    cin >> num1 >>  num2;

    int soma = num1+num2;
    int subtracao = num1-num2;
    int multiplicacao = num1*num2;
    float divisao;
    int resto;

    if(num2!=0){
        divisao = (num1*1.0)/num2;
        resto = num1%num2;
        cout << soma << " " << subtracao << " " << multiplicacao << " " << divisao << " " << resto;
    }else{
        cout << soma << " " << subtracao << " " << multiplicacao << endl;
        cout << "impossivel dividir por zero";
    }
}