#include <iostream>

using namespace std;

void selectionSortD(int *vetor, int tamanho){
    int indiceMenor, aux;
    for(int i = tamanho-1; i >= 0; i--){
        indiceMenor = i;
        for(int j = i - 1; j >= 0; j--){
            if(vetor[j] < vetor[indiceMenor]){
                indiceMenor = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[indiceMenor];
        vetor[indiceMenor] = aux;

        for(int k = 0; k < tamanho; k++){
            cout << vetor[k] << " ";
        }
        cout << endl;
    }
}

int main(){
    int tamanho;
    cin >> tamanho;
    int *vetor = new int[tamanho];
    for(int i = 0; i < tamanho; i++){
        cin >> vetor[i];
    }

    selectionSortD(vetor,tamanho);



    delete[] vetor;
    return 0;
}
