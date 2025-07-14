#include <iostream>

using namespace std;

struct Datas
{
    int dia, mes, ano;
};

struct Pessoas
{
    string nome;
    Datas dataNascimento;
};

int main(){
    int numPessoas;
    cin >> numPessoas;
    Pessoas *pessoa = new Pessoas[numPessoas];
    for(int i = 0; i < numPessoas; i++){
        cin >> pessoa[i].nome >> pessoa[i].dataNascimento.dia >> pessoa[i].dataNascimento.mes >> pessoa[i].dataNascimento.ano;
    }

    Pessoas maisVelho = pessoa[0];

    for(int i = 0; i < numPessoas; i++){
        if(maisVelho.dataNascimento.ano > pessoa[i].dataNascimento.ano){
            maisVelho = pessoa[i];
        }
        if(maisVelho.dataNascimento.ano == pessoa[i].dataNascimento.ano){
            if(maisVelho.dataNascimento.mes > pessoa[i].dataNascimento.mes){
                maisVelho = pessoa[i];
            }
            if(maisVelho.dataNascimento.mes == pessoa[i].dataNascimento.mes){
                if(maisVelho.dataNascimento.dia > pessoa[i].dataNascimento.dia){
                    maisVelho = pessoa[i];
                }
            }
        }
    }

    cout << maisVelho.nome << endl;



    return 0;
}
