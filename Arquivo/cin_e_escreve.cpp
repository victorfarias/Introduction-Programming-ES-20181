#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Aluno{
    string nome;
    string matricula;
};

int main(){
    ofstream outfile; // declarar ofstream - escrita
    Aluno aluno;
    
    // abrindo arquivo com nome arquivo.txt com cursor no final
    outfile.open("alunos.txt", ios::app);
    // ios::app - 1) abre arquivo com o cursor no final

    // Verifica se arquivo foi aberto com sucesso
    if(!outfile){
        cout << "Arquivo com problema!!";
        return 1;
    }

    // Ler nome e matricula de aluno e escrever em arquivo
    for(int i=0; i<3; i++){
        cout << "Insira nome e matricula de aluno" << endl;
        cin >> aluno.nome >> aluno.matricula;
        outfile << aluno.nome << " " << aluno.matricula << "\n";
        outfile << flush; // força esvaziamento da memória para o disco
    }

    outfile.close(); // Fechar o arquivo

    return 0;

}