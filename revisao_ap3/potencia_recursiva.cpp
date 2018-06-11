#include <iostream>

using namespace std;

//faça uma função que calcula a potencia de um numero: "b" elevado a "e".
float potencia(float b, int e){
    if(e == 0){
        return 1;
    }else if(e==1){
        return b;
    }else{
        return potencia(b, e-1)*b;
    }
}

int main(){
    cout << potencia(2,3);
    return 0;
}