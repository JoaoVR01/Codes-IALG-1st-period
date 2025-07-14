#include <iostream>

using namespace std;

void busca_binaria(int *vet, int elemento, int tamanho)
{

    int indiceInicial = 0, indiceFinal = tamanho - 1, posicaoInicialElemento = -1;
    // Busca Binaria para a posição inicial (encontra a primeira incidencia do elemento)
    while (indiceInicial <= indiceFinal)
    {
        // dividir o vetor ao meio
        int indiceMeioVetor = (indiceInicial + indiceFinal) / 2;
        if (vet[indiceMeioVetor] == elemento)
        {
            posicaoInicialElemento = indiceMeioVetor;
            // para o loop
            //indiceInicial = indiceFinal + 1;
            indiceFinal = indiceMeioVetor - 1;
        }
        else if (elemento > vet[indiceMeioVetor])
        {
            // torna o indice inicial igual ao do meio do vetor, para dividir o vetor novamente, uma posição após a do meio
            // quer dizer que o elemento está depois do meio do vetor
            indiceInicial = indiceMeioVetor + 1;
        }
        else
        {
            // torna o indice inicial igual ao do meio do vetor, para dividir o vetor novamente, uma posição anterior à do meio
            // quer dizer que o elemento está antes do meio do vetor
            indiceFinal = indiceMeioVetor - 1;
        }
    }

    int posicaoFinalElemento = -1;
    indiceInicial = 0, indiceFinal = tamanho - 1;

    // Busca binaria para a posição final (encontra a ultima incidencia do elemento)
    while (indiceInicial <= indiceFinal)
    {
        int indiceMeioVetor = (indiceInicial + indiceFinal) / 2;
        if (vet[indiceMeioVetor] == elemento)
        {
            posicaoFinalElemento = indiceMeioVetor;
            //permite que o algoritmo procure mais incidencias do elemento na posição posterior ao encontro
            indiceInicial = indiceMeioVetor + 1;
        }
        else
        {
            if (elemento > vet[indiceMeioVetor])
            {
                indiceInicial = indiceMeioVetor + 1;
            }
            else
            {
                indiceFinal = indiceMeioVetor - 1;
            }
        }
    }
    cout << posicaoInicialElemento << " " << posicaoFinalElemento << endl;

    for (int i = posicaoInicialElemento; i <= posicaoFinalElemento; i++)
    {
        cout << vet[i] << " ";
    }
}

int main()
{
    int elemento, tamanho = 23;
    int vet[tamanho] = {0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 7, 8, 9};
    cin >> elemento;
    busca_binaria(vet, elemento, tamanho);

    return 0;
}
