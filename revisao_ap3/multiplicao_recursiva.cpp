#include <iostream>

using namespace std;

/*Multiplicação de dois números naturais, através de somas sucessivas
 * (Ex.: 6 ∗ 4 = 4 + 4 + 4 + 4 + 4 + 4).
 */

int multiplicacao(int a, int b){
    if(a==1){
        return b;
    }else{
        return multiplicacao(a-1, b) + b;
    }
    return 0;
}

int main(){
    cout << multiplicacao(3,3);
    return 0;
}