/*
Vetores: 
tipo_dado identificador_variável[quantidade_elementos] = {lista_valores};

Memória:
Em C/C++ é possível obter o endereço de memória de uma variável qualquer, 
independentemente de seu tipo, utilizando o operador &. Para isto, basta 
preceder o identificador da variável pelo símbolo &

Em C/C++, o valor de um vetor é exatamente o seu endereço de memória (assim como o endereço do primeiro elemento armazenado no vetor).
Como o valor de um vetor é um endereço de memória, ele é um ponteiro:

Dica: Definir o tamanho de um vetor:
const int TAMVETOR = 100;
int vetor[TAMVETOR];

Estrutura for: repetições contadas
for (inicialização; teste; atualização) {
     Bloco_de_repetição
}
*/

#include <iostream>

using namespace std;

int main(){
    int num, i = 0;
    float vetor[20], soma = 0, media;
    cin>>num;
    for(i = 0; i < num; i++){
        cin>>vetor[i];
        soma += vetor[i];
    }
    media = soma/num;
    cout<<"Média: "<<media<<endl;
    return 0;
}

