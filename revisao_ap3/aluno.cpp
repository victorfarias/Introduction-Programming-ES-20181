#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

struct Aluno
{
    char *nome;
    int idade;
    float peso;
};

// Crie dinamicamente um registro Aluno e atribua os valores de seus campos com os valores passados como parâmetro.
Aluno* cria_aluno(char *nome, int idade, float peso){
    struct Aluno* aluno = (struct Aluno*)malloc(sizeof(struct Aluno));

    int tam_nome = strlen(nome);
    (*aluno).nome = (char*)malloc(sizeof(char)*(tam_nome+1));

    strcpy((*aluno).nome, nome);
    (*aluno).peso = peso;
    (*aluno).idade = idade;
    
    return aluno;
}

int main(){
    char nome[7]= {'v','i','c','t','o','r','\0'};
    struct Aluno* a = cria_aluno(nome, 26, 100);

    cout << (*a).nome << endl;
    cout << (*a).peso << endl;
    cout << (*a).idade << endl;

}