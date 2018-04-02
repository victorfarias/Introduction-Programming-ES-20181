#include <iostream>
using namespace std;

int main(){
    int a, b, digito, contador=0;
    cin >> a >> b;

    while(b!=0){
        digito = b%10;
        b = b/10;

        if(digito == a){
            contador ++;
        }
    }
    cout << contador;
}