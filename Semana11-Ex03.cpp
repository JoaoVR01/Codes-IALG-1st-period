/*
Papai Noel recebeu muitas cartas de crianças pedindo presentes para o natal. 
Agora, ele precisa catalogar os presentes e verificar se os brinquedos produzidos 
pelos duendes ao longo do ano serão o suficiente. Você deverá ajudar o papai noel 
a resolver este problema.

O seu programa utilizará dois registros. O primeiro registro representa uma Cartinha, 
com os campos nome da criança e presente pedido. O segundo registro representa um Brinquedo, 
com os campos nome do brinquedo, quantidade disponível, e quantidade pedida.

O seu programa irá receber como entrada os nomes das crianças e seus pedidos de presentes, e 
também os nomes e quantidades disponíveis de cada brinquedo. Seu programa irá então exibir 
quais os brinquedos não terão quantidade disponível suficiente para atender aos pedidos. 
Papai Noel utilizará este programa para saber como organizar melhor o trabalho dos duendes. 
Obs: os nomes das crianças e dos presentes não têm espaços.

Entradas:

Número de cartinhas.
Nome da criança e presente pedido de cada cartinha.
Número de brinquedos.
Nome e quantidade disponível de cada brinquedo.
Saídas:

Nomes dos brinquedos cujas quantidades não são suficientes para atender aos pedidos.
Exemplo de Entrada:

4
João Boneco
Maria Boneco
Pedro Carrinho
Ana Bola

3
Boneco 1
Bola 0
Carrinho 1
Exemplo de Saída:

Boneco Bola
*/

#include <iostream>

using namespace std;

struct Cartinhas{
    string nome, presente;
};

struct Brinquedos{
    string nomeBrinquedo;
    int estoque, pedido;
};

int main(){
    //criar vetor de struct cartinhas
    //receber os dados das cartinhas =>  nome da criança e brinquedo pedido
    //contador da quantidade de cada brinquedo
    //criar vetor de brinquedos
    int qtdCartinhas, qtdBrinquedos;
    cin >> qtdCartinhas;
    Cartinhas *cartinha = new Cartinhas[qtdCartinhas];
    for(int i = 0; i < qtdCartinhas; i++){
        cin >> cartinha[i].nome >> cartinha[i].presente;
    }

    cin >> qtdBrinquedos;
    Brinquedos *brinquedo = new Brinquedos[qtdBrinquedos];
    for(int i = 0; i < qtdBrinquedos; i++){
        cin >> brinquedo[i].nomeBrinquedo >> brinquedo[i].estoque;
    }

    for(int i = 0; i < qtdBrinquedos; i++){
        for(int j = 0; j < qtdCartinhas; j++){
            if(cartinha[j].presente == brinquedo[i].nomeBrinquedo){
                brinquedo[i].pedido++;
            }
        }
    }

    for(int i = 0; i < qtdBrinquedos; i++){
        if(brinquedo[i].estoque < brinquedo[i].pedido){
            cout << brinquedo[i].nomeBrinquedo << " ";
        }
    }

    return 0;
}