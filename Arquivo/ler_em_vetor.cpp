#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

struct Aluno{
    char nome[80];
    char matricula[80];
};

int contar_registros(string nome_arquivo){
    ifstream infile;     
    infile.open(nome_arquivo.c_str(), ios::in);

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

struct Aluno* alocar_alunos(int qtd){
    struct Aluno *alunos = (struct Aluno*)malloc(sizeof(struct Aluno)*qtd);
    if(alunos==NULL){
        exit(1);
    }
    return alunos;
}

void ler_registros(string nome_arquivo, struct Aluno *alunos, int qtd){

    ifstream in;
    in.open(nome_arquivo.c_str(), ios::in);
    if (!in){
        cout << "deu pau!";
        exit(1);
    }

    for(int i=0; i<qtd; i++){
        in >> alunos[i].nome >> alunos[i].matricula; 
    }

    in.close();
}

void imprimir_vetor(struct Aluno *alunos, int n){
    for(int i=0; i<n; i++){
        cout << alunos[i].nome << " " << alunos[i].matricula << endl;
    }
}

int main(){    

    struct Aluno alunos[5]; 

    int qtd_alunos = contar_registros("aluno.txt");
    
    struct Aluno *alunos = alocar_alunos(qtd_alunos);

    ler_registros("alunos.txt", alunos, qtd_alunos);

    imprimir_vetor(alunos, qtd_alunos);

    return 0;

}