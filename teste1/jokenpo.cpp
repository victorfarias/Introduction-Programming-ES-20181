#include <iostream>
using namespace std;

int main(){
    char jog1, jog2;
    cin >> jog1 >> jog2;

    if((jog1=='R' && jog2=='S') || (jog1=='S' && jog2=='P') || (jog1=='P' && jog2=='R')){
        cout << "jog1";
    }else if((jog1=='S' && jog2=='R') || (jog1=='R' && jog2=='P') || (jog1=='P' && jog2=='S')){
        cout << "jog2";
    }else{
        cout << "empate";
    }
}