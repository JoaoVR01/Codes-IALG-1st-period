/*
Escreva um programa que leia duas cadeias de caracteres e altere a primeira cadeia para retirar todos os caracteres que estão também na segunda cadeia. As duas cadeias de entrada devem ser declaradas como vetores de char alocados dinamicamente.

No final, a primeira cadeia de caracteres resultante deve ser copiada para um vertor de caracteres alocado dinamicamente com o tamanho exato. Todas alocações de vetores do programa devem ser dinâmicas.

Entradas:

Numero de elementos do primeiro vetor
Elementos do primeiro vetor
Numero de elementos do segundo vetor
Elementos do segundo vetor
Saídas:

Vetor resultante com os caracteres do primeiro vetor que não se encontram no segundo.
Exemplo de Entrada:

10
q w e r t y u i o p
9
m n b v c x z q w
Exemplo de Saída:

e r t y u i o p
*/

#include <iostream>

using namespace std;

int main(){
    int tamanho1, tamanho2, tamanho3 = 0;

    //Criação do primeiro vetor
    cin>>tamanho1;
    char *vetor1 = new char[tamanho1];
    for(int i = 0; i < tamanho1; i++){
        cin>>vetor1[i];
    }

    //Criação do segundo vetor
    cin>>tamanho2;
    char *vetor2 = new char[tamanho2];
    for(int i = 0; i < tamanho2; i++){
        cin>>vetor2[i];
    }

    //Criação de um vetor adicional
    int *vetor3 = new int[tamanho1];
    for(int i = 0; i < tamanho1; i++){
        vetor3[i] = 1;
    }

    for(int i = 0; i < tamanho1; i++){
        for(int j = 1; j < tamanho2; j++){
            if(vetor1[i] == vetor2[j]){
                vetor3[i]++;
            }
        }
    }

    
    for(int i = 0; i < tamanho1; i++){
        if(vetor3[i] <= 1){
            tamanho3++;
        }
    }
    char *resultado = new char[tamanho3];
    for(int i = 0; i<tamanho1; i++){
        if(vetor3[i] <= 1){
            resultado[i] = vetor1[i];
            cout<<resultado[i]<<" ";
        }

    }

    delete[] vetor1;
    delete[] vetor2;
    delete[] vetor3;
    delete[] resultado;
    return 0;
}
