/*
Registros:
Um registro (ou struct) em C++ é uma estrutura de dados composta que pode conter variáveis de tipos 
diferentes, agrupadas sob um mesmo nome. Ele permite organizar melhor os dados relacionados entre si.
*/

#include <iostream>

using namespace std;

struct Pessoa{
    //definição das keys
    string nome; 
    int idade;
    float altura;
};

int main(){
    Pessoa p1, *p2, *p3;
    p2 = &p1;
    p3 = &p1;
    p1.nome = "João";
    p1.idade = 19;
    p1.altura = 1.87;

    cout<<"p1: "<<p1.altura<<endl; //Acesso direto ao valor de P1.
    cout<<"p2: "<<*p2->altura<<endl; //*P2 acessa o objeto Ponto para o qual o ponteiro aponta.
    cout<<"p3: "<<p3->altura<<endl; //Mesmo acesso, mas usando a notação de seta (->), que é equivalente a (*P3).X.



    return 0;
}