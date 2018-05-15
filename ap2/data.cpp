#include <iostream>

using namespace std;

struct data {
    int dia; 
    int mes;
    int ano;
};

int comparar_datas(struct data d1, struct data d2){
    if(d2.ano < d1.ano){
        return 1;
    }else if(d1.ano < d2.ano){
        return -1;
    }else if(d2.mes < d1.mes){
        return 1;
    }else if(d1.mes < d2.mes){
        return -1;
    }else if(d2.dia < d1.dia){
        return 1;
    }else if(d1.dia < d2.dia){
        return -1;
    }else{
        return 0;
    }
}

int main(){
    struct data d1, d2;
    cin >> d1.dia >> d1.mes >> d1.ano >> d2.dia >> d2.mes >> d2.ano;
    int retorno = comparar_datas(d1,d2);
    if(retorno == 0){
        cout << "Iguais";
    }else if(retorno == -1){
        cout << "Mais antiga";
    }else{
        cout << "Mais recente";
    }
    return 0;
}
