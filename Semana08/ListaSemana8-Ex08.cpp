/*
Faça um programa que armazene, em um vetor alocado dinamicamente, um conjunto N de números inteiros. 
Em seguida, identifique os elementos que são números ímpares que sejam múltiplos de 3 e crie um novo 
vetor contendo apenas estes elementos. Os vetores devem ser alocados dinamicamente e, ao final, devem 
ser impressos na saída padrão o tamanho e os elementos do novo vetor.

Entradas:

Quantidade N de números inteiros.
Números armazenados.
Saídas:

Tamanho do vetor resultante.
Elementos do vetor resultante.
Exemplo de Entrada:

10
1 2 3 4 5 6 7 8 9 10
Exemplo de Saída:

2
3 9

Exemplo de Entrada:

7
2 4 6 7 8 10 11 
Exemplo de Saída:

0
*/

#include <iostream>

using namespace std;

int main(){
    int T1, T2 = 0;
    cin>>T1;
    int *N = new int[T1];
    for(int i = 0; i < T1; i++){
        cin>>N[i];
    }
    int *I3 = new int[T1];
    for(int i = 0; i < T1; i++){
        if(N[i]%2 != 0 and N[i]%3 == 0){
            I3[T2++] = N[i];
        }
    }
    cout<<T2<<endl;
    for(int i = 0; i < T2; i++){
        cout<<I3[i]<<" ";
    }

    return 0;
}
