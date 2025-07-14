#include <iostream>

using namespace std;
struct times
{
    string time;
    int pontos, vitorias, saldoGol;
};

void ordena(times *vetor, int tamanho){
    //selectionSort
    int indiceMaior;
    times aux;
    for(int i = 0; i < tamanho-1; i++){
        indiceMaior = i;
        for(int j = i + 1; j < tamanho; j++){
            if(vetor[j].pontos == vetor[indiceMaior].pontos){
                if(vetor[j].vitorias > vetor[indiceMaior].vitorias){
                    indiceMaior = j;
                }
                if(vetor[j].vitorias == vetor[indiceMaior].vitorias){
                    if(vetor[j].saldoGol > vetor[indiceMaior].saldoGol){
                    indiceMaior = j;
                    }
                }
            }
            if(vetor[j].pontos > vetor[indiceMaior].pontos){
                indiceMaior = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[indiceMaior];
        vetor[indiceMaior] = aux;
    }
}


int main(){
    int tam;
    cin >> tam;
    times *vetor = new times[tam];
    for(int i = 0; i < tam; i++){
        cin >> vetor[i].time >> vetor[i].pontos >> vetor[i].vitorias >> vetor[i].saldoGol;
    }

    ordena(vetor, tam);
    cout << endl;
    for(int i = 0; i < tam; i++){
        cout << vetor[i].time << " " << vetor[i].pontos << " " << vetor[i].vitorias << " " << vetor[i].saldoGol <<endl;
    }

    return 0;
}