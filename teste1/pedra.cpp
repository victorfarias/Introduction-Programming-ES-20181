#include <iostream>
using namespace std;

int main(){
    int n, a, b, menor=9999999, menor_i = -1, dif;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        if(a>=10 && b>=10){
            dif = a-b;
            if(dif < 0){
                dif = dif*-1;
            }
            if(dif < menor){
                menor = dif;
                menor_i = i;
            }
        }
    }
    if(menor_i == -1){
        cout << "sem ganhador";
    }else{
        cout << menor_i;
    }
}