#include <iostream>
#include <fstream>

using namespace std;

struct Fases
{
    int numero;
    string nome;
};

/*
O insertion sort se baseia em 3 ações:
-> Definir um valor como pivo

-> Comparar o pivo com outro elemento do vetor

-> Mover o maior elemento para a direita (ou o menor para a esquerda)

É dividido em duas estruturas de repetição:
Estrutura de fora: define um pivo, e acha sua posição correta,
fazendo isso da segunda posição até a ultima (for(int i = 1; i < tamanho; i++)).

Estrutura de dentro: compara o pivo com os elementos à sua esquerda.
Enquanto os elementos da esquerda não acabarem (j >= 0) e (and) os elementos
forem maiores que o pivo (vetor[i] > pivo), mover os elementos maiores para a direita:
vetor[j+1] = vetor[j];
j--;

*/

void insertionSort_crescente(Fases *vetor, int tamanho, int inicial){
    int j;
    Fases pivo;
    for(int i = inicial + 1; i < tamanho; i++){
        pivo = vetor[i];
        j = i - 1;
        while(j >= inicial and pivo.numero < vetor[j].numero){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = pivo;
    }
}

void insertionSort_decrescente(Fases *vetor, int tamanho){
    int j;
    Fases pivo;
    for(int i = 1; i < tamanho; i++){
        pivo = vetor[i];
        j = i - 1;
        while(j >= 0 and pivo.numero > vetor[j].numero){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = pivo;
    }
}


int main(){
    int tamanhoInicial = 3, i = 0;
    int N;
    Fases *vetor = new Fases[tamanhoInicial];
    Fases aux;
    ifstream entrada("fases.txt");
    while(entrada >> aux.numero){
        entrada >> aux.nome;

        vetor[i] = aux;
        i++;
        if(i >= tamanhoInicial){
            Fases *vetorTemp = new Fases[tamanhoInicial+1];
            for(int i = 0; i < tamanhoInicial; i++){
                vetorTemp[i] = vetor[i];
            }
            delete[] vetor;
            vetor = vetorTemp;
            tamanhoInicial += 1;
        }
    }
    cin >> N;
    insertionSort_decrescente(vetor, N);
    insertionSort_crescente(vetor, tamanhoInicial, N);
    for(int i = 0; i < tamanhoInicial; i++){
        cout << vetor[i].nome << endl;
    }
    return 0;
}