#include <iostream>

using namespace std;

int main(){
    int tamanhoVetor, tamanhoNovoVetor, j = 0;
    cin >> tamanhoVetor;
    int *vetor = new int[tamanhoVetor];
    for(int i = 0; i < tamanhoVetor; i++){
        cin >> vetor[i];
    }
    tamanhoNovoVetor = tamanhoVetor;
    int *vetorTemp = new int[tamanhoNovoVetor];
    for(int i = 0; i < tamanhoVetor; i++){
        if(vetor[i]%2 != 0 and vetor[i]%3 == 0){
            tamanhoNovoVetor--;
        }else{
            vetorTemp[j] = vetor[i];
            j++;
        }
    }
    delete[] vetor;
    vetor = vetorTemp;

    cout << tamanhoNovoVetor << endl;
    for(int i = 0; i < tamanhoNovoVetor; i++){
        cout<<vetor[i]<<" ";
    }
    cout << endl;


    return 0;
}