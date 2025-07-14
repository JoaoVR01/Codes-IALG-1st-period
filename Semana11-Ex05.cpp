#include <iostream>

using namespace std;

struct Politicos{
    string nome, partido;
};

struct Operacao{
    string nomeOperacao, nomePolitico;
    int roubo;
};

int main(){
    int numPoliticos, numOperacao, soma = 0;
    cin >> numPoliticos;
    Politicos *politico = new Politicos[numPoliticos];

    for(int i = 0; i < numPoliticos; i++){
        cin >> politico[i].partido >> politico[i].nome;
    }

    cin >> numOperacao;
    Operacao *operacao = new Operacao[numOperacao];
    for(int i = 0; i < numOperacao; i++){
        cin >> operacao[i].nomeOperacao >> operacao[i].nomePolitico >> operacao[i].roubo;
    }

    string partido, nomeOperacao;
    cin >> partido >> nomeOperacao;

    for(int i = 0; i < numOperacao; i++){
        if(operacao[i].nomeOperacao == nomeOperacao){
            for(int j = 0; j < numPoliticos; j++){
                if(operacao[i].nomePolitico == politico[j].nome){
                    if(politico[j].partido == partido){
                        soma += operacao[i].roubo;
                    }
                }
            }
            
        }
    }

    cout << soma << endl;

    return 0;
}