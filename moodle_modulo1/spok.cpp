#include <iostream>
using namespace std;

int main(){
    int id, id_original, digito, reverso=0;
    cin >> id;
    id_original = id;
    while(id!=0){
        digito = id%10;
        id = id/10;
        
        reverso = reverso*10 + digito;
    }
    if(id_original == reverso){
        cout << 1;
    }else{
        cout << 0;
    }
}