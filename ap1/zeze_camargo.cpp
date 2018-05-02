#include <iostream>
using namespace std;

int main(){
    int n, menor;
    cin >> menor;
    for(int i=0; i<4; i++){
        cin >> n;
        if(n < menor){
            menor = n;
        }
    }
    cout << menor;
}