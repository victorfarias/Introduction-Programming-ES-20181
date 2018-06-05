#include <iostream>

using namespace std;

int toNumber(char c){
    return c - 'a';
}

char toChar(int n){
    if(n > 25){
        n -= 26;
    }else if(n < 0){
        n += 26;
    }
    return (char)n + 'a';
}

char valdiskey2(char c1, char c2, char op){
    int resultado;
    if(op == '+'){
        resultado = toNumber(c1) + toNumber(c2);
    }else{
        resultado = toNumber(c1) - toNumber(c2);
    }
    return toChar(resultado);
}

int main(){
    char c1, c2, op;
    cin >> c1 >> op >> c2;

    
    cout << valdiskey2(c1, c2, op);    
    return 0;
}