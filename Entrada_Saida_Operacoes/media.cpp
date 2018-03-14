#include <iostream>
using namespace std;

int main() {
    // Receber dois números
    // Calcular a média entre eles
    cout << "Digite dois números" << endl;
    float x;
    float y;
    cin >> x;
    cin >> y;
    float resultado;
    resultado = (x+y)/2;
    cout << "Sua media eh: " << resultado;
}