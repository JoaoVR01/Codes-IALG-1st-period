#include <iostream>

using namespace std;

bool existe(int *vetor, int tamanho, int elemento){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == elemento){
            return true;
        }
    }
    return false;
}
int main(){
    int numeroElementos, tamanhoNovoVetor = 0;
    cin >> numeroElementos;
    int *vetor = new int[numeroElementos];
    for(int i = 0; i < numeroElementos; i++){
        cin >> vetor[i];
    }
    //redimensionamento
    int *novoVetor = new int[tamanhoNovoVetor];
    int *vetoraux = new int[numeroElementos];
    for(int i = 0; i < numeroElementos; i++){
        if(!existe(vetoraux, tamanhoNovoVetor, vetor[i])){
            vetoraux[tamanhoNovoVetor] = vetor[i];
            tamanhoNovoVetor++;

        }
    }
    for(int i = 0; i < tamanhoNovoVetor; i++){
        novoVetor[i] = vetoraux[i];
    }
    delete[] vetor;
    vetor = novoVetor;
    
    cout << tamanhoNovoVetor << endl;
    for(int i = 0; i < tamanhoNovoVetor; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
    return 0;
}
