#include <iostream>
#include <cstring>

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

bool ehLetraMinuscula(char c){
    if(c >= 'a' && c<= 'z'){
        return true;
    }else{
        return false;
    }
}

int main(){
    char s[80], chave[80], op;
    cin.getline(s, 80); 
    cin >> chave;
    cin >> op;

    int j=0;
    char resultado;
    for(int i=0; s[i]!='\0'; i++){
        if(ehLetraMinuscula(s[i])){
            resultado = valdiskey2(s[i], chave[j], op);
            cout << resultado;
            j++;
            if(chave[j]=='\0'){
                j=0;
            }
        }else{
            cout << s[i];
        }
    }

    return 0;
}