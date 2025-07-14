#include <iostream>

using namespace std;

bool existe(char *vetor, int tamanho, char elemento)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (elemento == vetor[i])
        {
            return true;
        }
    }
    return false;
}

bool igualdade(char *vetor1, char *vetor2, int tamanho1, int tamanho2)
{
    if (tamanho1 != tamanho2)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < tamanho1; i++)
        {
            if (vetor1[i] != vetor2[i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int tamanhoN, tamanhoM, tamanhoNovo, k = 0;
    cin >> tamanhoN;
    char *vetorN = new char[tamanhoN];
    for (int i = 0; i < tamanhoN; i++)
    {
        cin >> vetorN[i];
    }
    cin >> tamanhoM;
    char *vetorM = new char[tamanhoM];
    for (int i = 0; i < tamanhoM; i++)
    {
        cin >> vetorM[i];
    }

    if (igualdade(vetorN, vetorM, tamanhoN, tamanhoM))
    {
        cout << "Vetores iguais" << endl;
    }
    else
    {

        tamanhoNovo = tamanhoN;
        char *vetorTemp = new char[tamanhoNovo];
        for (int i = 0; i < tamanhoN; i++)
        {
            if (existe(vetorM, tamanhoM, vetorN[i]))
            {
                tamanhoNovo--;
            }
            else
            {
                vetorTemp[k] = vetorN[i];
                k++;
            }
        }
        delete[] vetorN;
        vetorN = vetorTemp;

        for (int i = 0; i < tamanhoNovo; i++)
        {
            cout << vetorN[i] << " ";
        }
        cout << endl;
    }

    return 0;
}