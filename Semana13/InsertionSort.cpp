#include <iostream>

using namespace std;

void insertionSort(int *vetor, int tamanho){//algoritmo para ordenação crscente
    int pivo, j;
    for(int i = 1; i < tamanho; i++){//começar com o pivo no segundo elemento
        pivo = vetor[i];//define o valor do pivo
        j = i - 1;//define o indice antes do pivo
        while(j >= 0 and vetor[j] > pivo){//se o elemento é maior que o pivo, mover ele para a direita (para frente)
            vetor[j+1] = vetor[j]; //movendo o elemento para frente
            j--; //fazer a verificação do elemento anterior ainda
        }
        vetor[j+1] = pivo; //colocando o valor que está faltando em uma nova posição 
    }
}

int main(){
    int tamanho;
    cin >> tamanho;
    int *vetor = new int[tamanho];
    for(int i = 0; i < tamanho; i++){
        cin >> vetor[i];
    }

    insertionSort(vetor, tamanho);

    for(int i = 0; i < tamanho; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
    delete[] vetor;
    return 0;
}
