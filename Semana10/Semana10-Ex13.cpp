#include <iostream>

using namespace std;

int menor(int *vetor, int tamanhoVetor, int i){
    if(i == tamanhoVetor - 1){
       return vetor[i];
    }
    int menorResto = menor(vetor, tamanhoVetor, i + 1);

    if(vetor[i] < menorResto){
        return vetor[i];
    }else{
        return menorResto;
    }
}


int main(){
    int tamanhoVetor, i = 0;
    cin >> tamanhoVetor;
    int *vetor = new int[tamanhoVetor];
    for(int i = 0; i < tamanhoVetor; i++){
        cin >> vetor[i];
    }
    cout << menor(vetor, tamanhoVetor, i) << endl;

    return 0;
}
