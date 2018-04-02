#include <iostream>
using namespace std;

int main(){
    int pont1, pont2, pont3;
    cin >> pont1 >> pont2 >> pont3;

    if(pont1==pont2 && pont2==pont3){
        cout << "empate";
    }else if(pont1!=pont2 && pont1!=pont3){
        cout << "jog1";
    }else if(pont2!=pont1 && pont2!=pont3){
        cout << "jog2";
    }else{
        cout<< "jog3";
    }
}