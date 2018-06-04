#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    ofstream outfile; // declarar ofstream - escrita
    
    // abrindo arquivo com nome arquivo.txt com cursor no início
    outfile.open("arquivo.txt", ios::out);
    // ios::out - 1) abre arquivo caso arquivo não exista - 2) Se arquivo, ele sobrescreve

    // Verifica se arquivo foi aberto com sucesso
    if(!outfile){
        cout << "Arquivo com problema!!";
        return 1;
    }

    outfile << "Alguma coisa"; // Escreve no arquivo

    outfile.close(); // Fechar o arquivo

    return 0;

}