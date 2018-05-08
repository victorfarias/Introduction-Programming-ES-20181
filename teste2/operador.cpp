#include <iostream>
using namespace std;

struct operacao{
    float num1;
    float num2;
    char operador;
};

float executar_operacao(struct operacao op){
    if(op.operador == '+'){
        return op.num1 + op.num2;
    }else if(op.operador == '-'){
        return op.num1 - op.num2;
    }else if(op.operador == '*'){
        return op.num1 * op.num2;
    }else{
        return op.num1/op.num2;
    }
}

int main(){
    struct operacao op;
    cin >> op.num1;
    cin >> op.num2;
    cin >> op.operador;
    cout << executar_operacao(op);
    return 0;
}