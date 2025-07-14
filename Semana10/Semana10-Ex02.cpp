#include <iostream>

using namespace std;

int main()
{
    float matriz[4][4];
    float soma = 0.0;
    int numeroCidades;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> matriz[i][j];
        }
    }
    cin >> numeroCidades;
    int *vetorIndicesCidades = new int[numeroCidades];
    for(int i = 0; i < numeroCidades; i++){
        cin >> vetorIndicesCidades[i];
        if(i > 0){
            soma += matriz[vetorIndicesCidades[i-1]][vetorIndicesCidades[i]];
        }
    }

    cout << soma << endl;

    return 0;
}
