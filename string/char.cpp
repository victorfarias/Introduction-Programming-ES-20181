#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char c = 'A', c1= 'a';
    cout << (int)c << endl;
    cout << c+1 << endl; // cast automático para inteiro
    cout << (char)(c+1) << endl; // cast automático para inteiro

    cout << (char)tolower(c) << endl;
    cout << (char)toupper(c1) << endl;

    cout << (char)(c+32) << endl;
    cout << (char)(c1-32) << endl;

    cout << (int)'!' << endl;

    return 0;
}

// isalpha	Retorna verdadeiro se o argumento é uma letra do alfabeto; falso em caso contrário.
// isalnum	Retorna verdadeiro se o argumento é uma letra do alfabeto ou um dígito; falso em caso contrário.
// isdigit	Retorna verdadeiro se o argumento é um dígito; falso em caso contrário.
// islower	Retorna verdadeiro se o argumento é uma letra minúscula, falso em caso contrário.
// isprint	Retorna verdadeiro se o argumento é um caractere imprimível (incluíndo espaços); falso em caso contrário.
// ispunct	Retorna verdadeiro se o argumento é um sinal de pontuação (caracteres imprimíveis que não sejam letras, dígitos ou espaço); falso em caso contrário.
// isupper	Retorna verdadeiro se o argumento é uma letra maiúscula; falso em caso contrário.
// isspace	Retorna verdadeiro se o argumento é um espaço, tabulação ou nova linha; falso em caso contrário.
