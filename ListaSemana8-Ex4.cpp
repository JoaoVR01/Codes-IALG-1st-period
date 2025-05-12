
/*
Faça um programa que lê um vetor de números inteiros e depois escreve todos os números entre dois marcadores de limite 
na ordem inversa. Os limites não farão parte da saída.

Os marcadores não precisam estar em ordem, ou seja, o primeiro marcador não necessariamente precisa vir antes do segundo. 
Observe os exemplos a seguir.

Obs: os vetores devem ser alocados dinamicamente.

Entradas:

Quantidade de elementos do vetor.
Linha contendo os números inteiros do vetor (separados entre si por espaço).
Linha contendo os dois números delimitadores (separados entre si por espaço).
Saídas:

Números do vetor entre os delimitadores, na ordem inversa da leitura.
Exemplo de entrada:

6
9 2 3 4 5 6
2 6
Exemplo de saída:

5 4 3
Exemplo de entrada:

7
8 -1 2 4 5 0 3
5 -1
Exemplo de saída:

4 2
*/

#include <iostream>

using namespace std;

int main(){
    int tamanho, min, max, i_min, i_max;
    cin>>tamanho;
    int *numeros = new int[tamanho];
    for(int i = 0; i < tamanho; i++){
        cin>>numeros[i];
    }
    //Criar vetor na ordem inversa
    int *numeros_reversed = new int[tamanho];
    for(int i = tamanho-1, j = 0; i >= 0; i--, j++){
        numeros_reversed[j] = numeros[i];
    }
    cin>>min>>max;
    //Obter os indices de min e max
    for(int i = 0; i < tamanho; i++){
        if(numeros_reversed[i] == min){
            i_min = i;
        }
        if(numeros_reversed[i] == max){
            i_max = i;
        }
    }
    //Condição de inprerssão dos dados do vetor
    for(int i = 0; i < tamanho; i++){
        if(i > i_min and i < i_max){
            cout<<numeros_reversed[i]<<" ";
        }else if(i > i_max and i < i_min){
            cout<<numeros_reversed[i]<<" ";
        }
    }

    delete[] numeros;
    delete[] numeros_reversed;

    return 0;
}
