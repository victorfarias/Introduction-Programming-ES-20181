#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Aluno{
    string nome;
    string matricula;
};

int main(){
    ifstream infile; // declarar ifstream - leitura
    Aluno aluno;
    
    // abrindo arquivo com nome arquivo.txt com cursor no início
    infile.open("alunos.txt", ios::in);
    // ios::in - 1) abre arquivo com o cursor no início

    // Verifica se arquivo foi aberto com sucesso
    if(!infile){
        cout << "Arquivo com problema!!";
        return 1;
    }

    // Ler nome e matricula dos alunos no arquivo e mostrar na tela
    // infile.eof() - te diz se cursor está no final
    
    // Versão 1 - sem /n no final do arquivo
    // while(!infile.eof()){
    //     infile >> aluno.nome >> aluno.matricula;
    //     cout << aluno.nome << " " << aluno.matricula << endl;
    // }

    // Versão 2 com /n no final
    while(infile >> aluno.nome >> aluno.matricula){
        cout << aluno.nome << " " << aluno.matricula << endl;
    }

    infile.close(); // Fechar o arquivo

    return 0;

}