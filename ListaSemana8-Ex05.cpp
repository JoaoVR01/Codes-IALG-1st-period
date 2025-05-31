/*
Faça um programa que receba o tamanho N de um vetor e o preencha. Encontre o segundo menor e o segundo maior elementos, 
crie um novo vetor com duas posições a menos e preencha o novo vetor com os demais elementos, excluindo os dois elementos identificados. 
Imprima o novo vetor. Considere, para fins de simplificação, que o segundo maior e o segundo menor são diferentes.

Entradas:

int n - Tamanho do vetor.
float vet[n] - Vetor que será preenchido.
Saídas:

Novo vetor, retirando o segundo menor e segundo maior elementos (float).

Exemplos de Entradas e Saídas:
Entradas:
4
3
1
6
5

Saídas:
1
6
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    float seg_menor, seg_maior, maior, menor;
    cin>>n;
    float *vet = new float[n];
    for(int i = 0; i < n; i++){
        cin>>vet[i];
    }
    maior = vet[0];
    seg_maior = vet[1];
    if(seg_maior > maior){
        maior = vet[1];
        seg_maior = vet[0];
    }
    menor = vet[0];
    seg_menor = vet[1];
    if(seg_menor < menor){
        menor = vet[1];
        seg_menor = vet[0];
    }

    for(int i = 0; i < n; i++){
        if(vet[i] > maior){
            seg_maior = maior;
            maior = vet[i];
        }
        if(vet[i] > seg_maior and vet[i] < maior){
            seg_maior = vet[i];
        }

        if(vet[i] < menor){
            menor = vet[i];
        }if(vet[i] > menor and vet[i] < seg_menor){
            seg_menor = vet[i];
        }
    }
    float *resultado = new float[n-2];
    for(int i = 0; i < n; i++){
        if(vet[i] != seg_maior and vet[i] != seg_menor){
            resultado[i] = vet[i];
            cout<<resultado[i]<<endl; 
        }
    }
    delete[] vet;
    delete[] resultado;

    return 0;
}
