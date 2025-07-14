#include <iostream>

using namespace std;

void mostarVetor(int *vetor, int tamanho, int pos1, int pos2, bool troca, int &controle)
{
        for (int i = 0; i < tamanho; i++)
        {
            cout << vetor[i];
            if (i == pos1 or i == pos2)
            {
                if (troca)
                {
                    cout << " t     ";
                }
                else
                {
                    cout << " *     ";
                }
            }
            else
            {
                cout << "       ";
            }
        }
    cout << endl;
    if(controle == tamanho-2){
        for(int i = 0; i < tamanho; i++){
            cout << vetor[i] << "       ";
        }
    }
    cout << endl;
}

void selectionSort(int *vetor, int tamanho)
{
    bool troca;
    int pos1, pos2, indiceMenor, aux;
    for (int i = 0; i < tamanho - 1; i++)
    {
        indiceMenor = i;
        for (int j = i + 1; j < tamanho; j++)
        {
            pos1 = indiceMenor;
            pos2 = j;
            troca = false;
            mostarVetor(vetor, tamanho, pos1, pos2, troca, i);
            if (vetor[j] < vetor[indiceMenor])
            {
                indiceMenor = j;
                troca = true;
                mostarVetor(vetor, tamanho, pos1, pos2, troca, i);
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[indiceMenor];
        vetor[indiceMenor] = aux;
    }
    
}

int main()
{
    int tamanho;
    cin >> tamanho;
    int *vetor = new int[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }

    selectionSort(vetor, tamanho);

    return 0;
}