/*
Faça um programa que realiza busca binária de números inteiros em ordem decrescente. 
O programa deve escrever a posição do valor procurado. Se o valor procurado não estiver 
no vetor, a posição -1 (menos um) deverá ser escrita. Se o valor procurado ocorrer mais 
de uma vez no vetor, a primeira ocorrência que for encontrada é a que deve ser informada. 
A busca binária deve ser realizada por um módulo recursivo.

Entradas:

A quantidade de números a ser lida.
Vários números inteiros em ordem decrescente.
O valor procurado (número inteiro).
Saída:

A posição do valor procurado.
Exemplo de entrada:

6
8 7 5 4 2 2
5
Exemplo de saída:

2
*/

#include <iostream>

using namespace std;

int buscaBinaria(int *vetor, int tamanho, int elemento){
    int posicaoElemento = -1;
    int indiceIncial = 0, indiceFinal = tamanho-1;
    while (indiceIncial <= indiceFinal){
        int indiceMeio = (indiceIncial + indiceFinal)/2;
        if(elemento == vetor[indiceMeio]){
            posicaoElemento = indiceMeio;
            indiceIncial = indiceFinal + 1;
        }

        if(elemento > vetor[indiceMeio]){
            indiceFinal = indiceMeio - 1;
        }else{
            indiceIncial = indiceMeio + 1;
        }
    }

    return posicaoElemento;

}

int main(){
    int elemento, tamanhoVetor;
    cin >> tamanhoVetor;
    int *vetor = new int[tamanhoVetor];
    for(int i = 0; i < tamanhoVetor; i++){
        cin >> vetor[i];
    }
    cin >> elemento;
    cout << buscaBinaria(vetor, tamanhoVetor, elemento) << endl;

    return 0;
}
