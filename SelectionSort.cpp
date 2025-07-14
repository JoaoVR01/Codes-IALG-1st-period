#include <iostream>

using namespace std;

void selectionSort(int *vetor, int tamanho){
    int indiceMenor, aux;
    for(int i = 0; i < tamanho - 1; i++){
        indiceMenor = i;
        // definir o menor indice
        for(int j = i + 1; j < tamanho; j++){//deve-se comecar sempre uma posição a frente do menor
            if(vetor[j] < vetor[indiceMenor]){
                indiceMenor = j;
            }
        }
        // fazer a troca de posição
        aux = vetor[i];
        vetor[i] = vetor[indiceMenor];
        vetor[indiceMenor] = aux;
    }
}

int main(){
    int tamanhoVetor;
    cin >> tamanhoVetor;
    int *vetor = new int[tamanhoVetor];
    for(int i = 0; i < tamanhoVetor; i++){
        cin >> vetor[i];
    }

    selectionSort(vetor, tamanhoVetor);

    for(int i = 0; i < tamanhoVetor; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}