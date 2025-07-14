#include <iostream>

using namespace std;

void selectionSort(float *vetor, int tamanho){
    int indiceMaior;
    float aux;
    for(int i = 0; i < tamanho-1; i++){
        indiceMaior = i;
        for(int j = i + 1; j < tamanho; j++){
            if(vetor[j] > vetor[indiceMaior]){
                indiceMaior = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[indiceMaior];
        vetor[indiceMaior] = aux;

    
        for(int k = 0; k < tamanho; k++){
            cout << vetor[k] << "  ";
        }
        cout << endl;
    }
}

int main(){
    int tamanho;
    cin >> tamanho;
    float *vetor = new float[tamanho];
    for(int i = 0; i < tamanho; i++){
        cin >> vetor[i];
    }
    selectionSort(vetor, tamanho);

    for(int k = 0; k < tamanho; k++){
            cout << vetor[k] << "  ";
        }
        cout << endl;

    return 0;
}
