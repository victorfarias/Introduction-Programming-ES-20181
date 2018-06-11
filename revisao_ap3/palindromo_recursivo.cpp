#include <iostream>

using namespace std;
/* faça uma função que retorne true se uma string é palidroma e false
 * caso contrario.
 */
bool eh_palindromo(char *palavra, int tam){
    if(tam <= 1){
        return true;
    }else if(palavra[0] == palavra[tam-1] && eh_palindromo(palavra+1, tam-2)){
        return true;
    }else{
        return false;
    }
}

int main(){
    char palavra[5] = {'a','b','b','a','\0'};
    char palavra1[5] = {'a','b','c','a','\0'};

    cout << eh_palindromo(palavra, 4) << endl;
    cout << eh_palindromo(palavra1, 4) << endl;

    return 0;
}