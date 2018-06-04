#include <iostream>

using namespace std;

struct teste{
    int a;
    int b;
    int c;
};

int main(){
    int x;
    cout << &x << endl;

    int v[4];
    cout << v << endl;
    cout << &v[0] << endl;
    cout << &v[1] << endl;

    struct teste t;
    cout << &t << endl;
    cout << &t.a << endl;
    cout << &t.b << endl;
    cout << &t.c << endl;
}