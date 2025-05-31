//Registros = estruturas heterogêneas que armazenam dados de diferentes tipos.
/*
Estrutura dos registros (struct):

struct identificador_estrutura{
      tipo_dado_1 identificador_campo_1;
      tipo_dado_2 identificador_campo_2; 
      //..
      tipo_dado_N identificador_campo_N;
};

Sintaxe para declaração de variavel do tipo struct para manipular os dados da estrutura:

identificador_estrutura identificador_variável;

Sintaxe para acessar os campos do registro:

identificador_variável.identificador_campo;

*/

#include <iostream>

using namespace std;

struct pessoa{
    string nome;
    int idade;
    string cpf;
    string email;
};

int main(){
    pessoa dados_pessoais;
    cin>>dados_pessoais.nome>>dados_pessoais.idade>>dados_pessoais.cpf>>dados_pessoais.email;
    cout<<dados_pessoais.nome<<endl;
    cout<<dados_pessoais.idade<<endl;
    cout<<dados_pessoais.cpf<<endl;
    cout<<dados_pessoais.email<<endl;

    return 0;
}
