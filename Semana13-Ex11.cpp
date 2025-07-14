#include <iostream>
#include <cmath>

using namespace std;
struct dadosCliente{
    string nomeCliente;
    int xCliente, yCliente;
    int distanciaPizzaria;
    float valor;
};

int distancia(int xCliente, int yCliente, int xPizzaria, int yPizzaria){
    return sqrt(pow(xPizzaria-xCliente,2) + pow(yPizzaria-yCliente,2));
}

void insertionSort(dadosCliente *vetor, int tamanho){
    dadosCliente pivo;
    int j;
    for(int i = 1; i < tamanho; i++){
        pivo = vetor[i];
        j = i-1;
        while(j >= 0 and vetor[j].distanciaPizzaria > pivo.distanciaPizzaria){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = pivo;

    }
}

int main(){
    int atendidos, xPizzaria, yPizzaria, total;
    float soma = 0;
    cin >> atendidos >> xPizzaria >> yPizzaria >> total;
    dadosCliente *vetor = new dadosCliente[total];
    for(int i = 0; i < total; i++){
        cin >> vetor[i].nomeCliente
            >> vetor[i].xCliente
            >> vetor[i].yCliente
            >> vetor[i].valor;
        vetor[i].distanciaPizzaria = distancia(vetor[i].xCliente, vetor[i].yCliente, xPizzaria, yPizzaria);
    }

    insertionSort(vetor, total);

    for(int i = 0 ; i < atendidos; i++){
        soma += vetor[i].valor;
    }

    cout << endl << soma << endl;
    

    return 0;
}