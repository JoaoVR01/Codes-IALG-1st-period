#include <iostream>

using namespace std;

float medio(int *vetor, int tamanho){
    if(tamanho%2!=0){
        tamanho = tamanho - 1;
        int indice = tamanho/2;
        return float(vetor[indice])/2.0;
    }else{
        return float(vetor[tamanho/2] + vetor[(tamanho/2) - 1])/2.0;
    }
}

int main(){
    bool controle = true;
    int tamanhoInicial = 2, i = 0, entrada, qtd = 0;
    int *vetor = new int[tamanhoInicial];

    while(controle){
        cin >> entrada;
        //encerar loop
        if(entrada == -1)
            controle = false;
        else{
            vetor[i] = entrada;
            i++;
            if(i >= tamanhoInicial){
                int *vetorTemp = new int[tamanhoInicial + 2];
                for(int i = 0; i < tamanhoInicial; i++){
                    vetorTemp[i] = vetor[i];
                }
                delete[] vetor;
                vetor = vetorTemp;
                tamanhoInicial += 2;
            }
            qtd++;
        }
    }
    cout << medio(vetor, qtd) << endl;


    return 0;
}