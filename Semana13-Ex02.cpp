#include <iostream>

using namespace std;

/*
Selection sort: consiste em selecionar o menor elemento do arranjo e trazê-lo
para a segunda posição
O selection sort se baseia em:
-> selecionar o elemento em V com o menor valor de chave (ou maior)

-> Trocar de posição o menor (ou maior) elemento encontrado com o elemento que ocupa V[0]

->Repetir as operações acima com os demais elementos

*/

void selectionSort_decrescente(int *vetor, int tamanho, int posicao)
{
    int maiorIndice, aux, controle = 0;

    for (int i = 0; i < tamanho - 1; i++)
    {
        // se usa tamanho-1 pois no final o ultimo item já estara na posição correta
        if (controle <= posicao)
        {
            maiorIndice = i;
            // encontra o maior indice
            for (int j = i + 1; j < tamanho; j++)
            {
                if (vetor[j] > vetor[maiorIndice])
                {
                    maiorIndice = j;
                }
            }
            // muda as posições
            aux = vetor[i];
            vetor[i] = vetor[maiorIndice];
            vetor[maiorIndice] = aux;
        }
        controle++;
    }
}

int main()
{
    int tamanhoVetor;
    cin >> tamanhoVetor;
    int *vetor = new int[tamanhoVetor];
    for (int i = 0; i < tamanhoVetor; i++)
    {
        cin >> vetor[i];
    }
    int posicao;
    cin >> posicao;
    selectionSort_decrescente(vetor, tamanhoVetor, posicao);
    for (int i = 0; i < tamanhoVetor; i++)
    {
        cout << vetor[i] << " ";
    }

    return 0;
}