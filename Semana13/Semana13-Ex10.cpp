#include <iostream>

using namespace std;

void shellSort(int *vetor, int tamanho, int gap){
    for(int i = gap; i < tamanho; i++){
        int pivo = vetor[i];
        int j = i;
        while(j >= gap and pivo < vetor[j-gap]){
            vetor[j] = vetor[j-gap];
            j -= gap;
        }
        vetor[j] = pivo;
    }
}

int main(){     
    int tam, gap;
    cin >> tam;
    int *vetor = new int[tam];
    for(int i = 0; i < tam; i++){
        cin >> vetor[i];
    }
    cin >> gap;

    shellSort(vetor, tam, gap);
    for(int i = 0; i < tam; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
    return 0;
}
