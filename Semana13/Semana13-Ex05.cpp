#include <iostream>
#include <fstream>

using namespace std;

struct operacoes{
    string nomeOp;
    int num;
};

void selectionSortC(operacoes *vetor, int tamanho){
    int indicemenor;
    operacoes aux;
    for(int i = 0; i < tamanho -1 ; i++){
        indicemenor = i;
        for(int j = i + 1; j < tamanho; j++){
            if(vetor[j].num < vetor[indicemenor].num){
                indicemenor = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[indicemenor];
        vetor[indicemenor] = aux;
    }
}

void selectionSortD(operacoes *vetor, int tamanho, int inicio){
    int indicemaior;
    operacoes aux;
    for(int i = inicio; i < tamanho -1 ; i++){
        indicemaior = i;
        for(int j = i + 1; j < tamanho; j++){
            if(vetor[j].num > vetor[indicemaior].num){
                indicemaior = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[indicemaior];
        vetor[indicemaior] = aux;
    }
}

int main(){
    int quantidade, tamanho = 5, i = 0;
    ifstream entrada("fases.txt");
    operacoes aux;
    operacoes *vetor = new operacoes[tamanho];
    while(entrada >> aux.num){
        entrada >> aux.nomeOp;
        vetor[i] = aux;
        i++;
        if(i >= tamanho){
            operacoes *vetorTemp = new operacoes[tamanho+1];
            for(int i = 0; i < tamanho; i++){
                vetorTemp[i] = vetor[i];
            }
            delete[] vetor;
            vetor = vetorTemp;
            tamanho += 1;
        }
    }
    cin >> quantidade;
    selectionSortC(vetor, quantidade);
    selectionSortD(vetor, i, quantidade);

    for(int j = 0; j < tamanho; j++){
        cout << vetor[j].nomeOp << endl;
    }

    return 0;
}
