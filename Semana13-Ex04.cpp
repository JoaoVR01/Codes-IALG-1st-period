#include <iostream>
#include <fstream>

using namespace std;

struct politicos{
    string nome, partido;
    float desvio;

};

void selectionSortD(politicos *vetor, int tamanho){
    int indiceMaior;
    politicos aux;
    for(int i = 0; i < tamanho-1; i++){
        indiceMaior = i;
        for(int j = i+1; j < tamanho; j++){
            if(vetor[j].desvio > vetor[indiceMaior].desvio){
                indiceMaior = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[indiceMaior];
        vetor[indiceMaior] = aux;
    }
}

int main(){
    politicos aux;
    int tamanhoInicial = 5, i = 0;
    ifstream entrada("relacao_desvios.txt");
    politicos *vetor = new politicos[tamanhoInicial];
    //leitura dos dados do arquivo com redimensionamento
    while(entrada >> aux.nome){
        entrada >> aux.partido;
        entrada >> aux.desvio;

        vetor[i] = aux;
        i++;
        if(i >= tamanhoInicial){
            politicos *vetorTemp = new politicos[tamanhoInicial+1];
            for(int i = 0; i < tamanhoInicial; i++){
                vetorTemp[i] = vetor[i];
            }
            delete[] vetor;
            vetor = vetorTemp;
            tamanhoInicial += 1;
        }
    }

    selectionSortD(vetor, i);

    for(int j = 0; j < i; j++){
        cout << vetor[j].nome << endl;
    }


    return 0;
}