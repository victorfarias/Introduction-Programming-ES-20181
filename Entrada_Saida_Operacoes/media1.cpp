#include <iostream>
using namespace std;

int main() {
    // Receber dois números
    // Calcular a média entre eles
    cout << "Digite dois números" << endl;
    float x, y, resultado;
    cin >> x >> y;
    resultado = (x+y)/2;
    cout << "Sua media eh: " << resultado;
}