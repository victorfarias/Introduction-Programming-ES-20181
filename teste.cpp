#include <iostream>
using namespace std;

int a =2;

int f(int b){
    return a+b;
}

int main(){
    cout << f(3);
}