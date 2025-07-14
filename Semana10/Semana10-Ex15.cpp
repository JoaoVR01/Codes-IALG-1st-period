#include <iostream>

using namespace std;

int buscaBinaria(int *vetor, int tamanahoVetor, int elemento){
    int indiceInicial = 0, indiceFinal = tamanahoVetor - 1;
    int posicaoElemento = -1;
    while(indiceInicial <= indiceFinal){
        int indiceMeio = (indiceInicial + indiceFinal)/2;

        if(elemento == vetor[indiceMeio]){
            posicaoElemento = indiceMeio;
            indiceInicial = indiceFinal + 1;
        }
        if(elemento > vetor[indiceMeio]){
            indiceInicial = indiceMeio + 1;
        }else
        {
            indiceFinal = indiceMeio - 1;
        }
    }

    return posicaoElemento;
    
}

int main(){
    int tamanhoVetor, elemento, multiplicador;
    cin >> tamanhoVetor;
    int *vetor = new int[tamanhoVetor];
    for(int i = 0; i < tamanhoVetor; i++){
        cin >> vetor[i]; 
    }
    cin >> elemento >> multiplicador;
    int posicaoElemento = buscaBinaria(vetor, tamanhoVetor, elemento);
    vetor[posicaoElemento] *= multiplicador;
    for(int i = 0; i < tamanhoVetor; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
