#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    ofstream outfile; // declarar ofstream - escrita
    
    // abrindo arquivo com nome arquivo.txt com cursor no final
    outfile.open("arquivo.txt", ios::app);
    // ios::app - 1) abre arquivo com o cursor no final

    // Verifica se arquivo foi aberto com sucesso
    if(!outfile){
        cout << "Arquivo com problema!!";
        return 1;
    }

    outfile << "Alguma coisa\n"; // Escreve no arquivo

    outfile.close(); // Fechar o arquivo

    return 0;

}