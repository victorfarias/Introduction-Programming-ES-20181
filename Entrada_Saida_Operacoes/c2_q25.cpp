#include <iostream>
using namespace std;

int main(){
    int hora, minuto;
    cout << "Insira hora e minuto" << endl;
    cin >> hora >> minuto;

    // item a
    int horas_em_minutos = hora*60;
    cout << "Hora digitada convertida em minutos eh: " << horas_em_minutos << endl;

    // item b
    int total_minutos = horas_em_minutos + minuto;
    cout << "O total de minutos eh: " << total_minutos  << endl;

    // item c
    int total_segundos = total_minutos*60;
    cout << "O total de segundos eh: " << total_segundos << endl;
}