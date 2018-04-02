#include <iostream>
using namespace std;

int main(){
    int t, num, jedi=0, sith=0;
    cin >> t;

    for(int i=0; i<t/2; i++){
        cin >> num;
        jedi += num;
    }
    for(int i=0; i<t/2; i++){
        cin >> num;
        sith += num;
    }
    if(jedi>sith){
        cout << "Jedi";
    }else if(jedi<sith){
        cout << "Sith";
    }else{
        cout << "Empate";
    }
}