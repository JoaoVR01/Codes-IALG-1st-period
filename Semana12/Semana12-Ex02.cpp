#include <iostream>

using namespace std;

int main()
{
    bool controle = false;
    int tamanhoVetor, k;
    cin >> tamanhoVetor;
    int *vetor = new int[tamanhoVetor];
    for (int i = 0; i < tamanhoVetor; i++)
    {
        cin >> vetor[i];
    }
    int tamanhoNovoVetor = tamanhoVetor;
    int *vetorTemp = new int[tamanhoNovoVetor];
    for (int i = 0; i < tamanhoVetor; i++)
    {
        for (int j = 1; j < tamanhoVetor; j++)
        {
            if (vetor[i] + vetor[j] == tamanhoVetor)
            {
                controle = true;
                j = tamanhoVetor; 
                i = tamanhoVetor;
            }
        }
    }
    if (controle)
    {
        for (int i = 0; i < tamanhoVetor; i++)
        {
            for (int j = 1; j < tamanhoVetor; j++)
            {
                if (vetor[i] + vetor[j] == tamanhoVetor)
                {
                    if(vetor[i] <= vetor[j]){
                        tamanhoNovoVetor = tamanhoVetor - vetor[i];
                        k = vetor[i];
                    }else{
                        tamanhoNovoVetor = tamanhoVetor - vetor[j];
                        k = vetor[j];
                    }
                    j = tamanhoVetor; 
                    i = tamanhoVetor;
                }
            }
        }
    }
    else
    {
        tamanhoNovoVetor = tamanhoVetor - 2;
        k = 1;
    }
    for (int i = 0; i <= tamanhoNovoVetor; i++)
    {
        vetorTemp[i] = vetor[k];
        k++;
    }
    delete[] vetor;
    vetor = vetorTemp;

    for (int i = 0; i < tamanhoNovoVetor; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    delete[] vetor;

    return 0;
}
