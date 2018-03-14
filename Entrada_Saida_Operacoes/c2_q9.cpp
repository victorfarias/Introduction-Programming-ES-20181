#include <iostream>
using namespace std;

int main(){
    float base_maior, base_menor, altura, area;
    cin >> base_maior >> base_menor >> altura;

    area = ((base_maior+base_menor)*altura)/2;

    cout << "A area do seu trapezio eh: " << area;
}