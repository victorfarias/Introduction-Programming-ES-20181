#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Aluno{
    string nome;
    string matricula;
};

int contar_registros(string nome_arquivo){
    ifstream infile;     
    infile.open("alunos.txt", ios::in);

    if(!infile){
        cout << "Arquivo com problema!!";
        return 1;
    }
    
    Aluno aluno;
    int contador = 0;
    while(infile >> aluno.nome >> aluno.matricula){
        contador ++;
    }
    infile.close();
    return contador;
}

int main(){
    cout << contar_registros("aluno.txt");
    
    return 0;

}