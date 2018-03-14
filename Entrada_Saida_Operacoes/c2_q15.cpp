#include <iostream>
using namespace std;

int main(){
    float salario, conta1, conta2, restante_salario;
    cout << "Insira o salario" << endl;
    cin  >> salario;
    cout << "Insira o valor da conta 1" << endl;
    cin >> conta1;
    cout << "insira o valor da conta 2" << endl;
    cin >> conta2;
    
    restante_salario = salario - conta1*1.02 - conta2*1.02;

    cout << "Restante do salario eh: " << restante_salario;
    
}