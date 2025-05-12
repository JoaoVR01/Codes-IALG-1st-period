/*
Faça um programa que receba a quantidade de números que o usuário digitará e em seguida preencha um vetor com os números inteiros, 
calcule e mostre: os números múltiplos de 2; os números múltiplos de 3; e os números múltiplos de 2 e 3. Os números múltiplos de 2 e 3 
podem aparecer nos casos isolados. Caso não exista nenhum número em cada caso, o programa deve retornar 0 na respectiva saída.

Observação: o vetor deverá ser alocado dinamicamente

Entradas:

Quantidade de números a serem inseridos pelo usuário/li>
Sequência de números inteiros
Saídas:

Números que são múltiplos de 2;
Números que são múltiplos de 3;
Números que são múltiplos de 2 e 3 simultaneamente.
Exemplo de entrada:

7
4 6 3 9 7 10 13
Exemplo de saída:

4 6 10
6 3 9 
6
*/

#include <iostream>

using namespace std;

int main(){
    int size, size2 = 0, size3 = 0, size2e3 = 0;
    cin>>size;
    int *numeros = new int[size];
    for(int i = 0; i < size; i++){
        cin>>numeros[i];
    }

    //Definição do tamanho dos vetores de multiplos
    for(int i = 0; i < size; i++){
        if(numeros[i]%2 == 0){
            size2++;
        }
        if(numeros[i]%3 == 0){
            size3++;
        }
        if(numeros[i]%2==0 and numeros[i]%3==0){
            size2e3++;
        }
    }
    //Criação dos vetores de multiplos:
    int *multiplos_2 = new int[size2];
    int *multiplos_3 = new int[size3];
    int *multiplos_2_3 = new int[size2e3];

    int aux1 = 0, aux2 = 0, aux3 = 0;
    
    for(int i = 0; i < size; i++){
        if(numeros[i]%2 == 0){
            multiplos_2[aux1++] = numeros[i];
        }
        if(numeros[i]%3 == 0){
            multiplos_3[aux2++] = numeros[i];
        }
        if(numeros[i]%2==0 and numeros[i]%3==0){
            multiplos_2_3[aux3++] = numeros[i];       
        }
    }

        //Imprimir valores
        //Multiplos de 2
        if(size2 > 0){
            for(int i = 0; i < size2; i++){
                cout<<multiplos_2[i]<<" ";
            }
        }else{
            cout<<0;
        }
        cout<<endl;
        //Multiplos de 3
        if(size3 > 0){
            for(int i = 0; i < size3; i++){
                cout<<multiplos_3[i]<<" ";
            }
        }else{
            cout<<0;
        }
        cout<<endl;
        //Multiplos de 2 e 3
        if(size2e3 > 0){
            for(int i = 0; i < size2e3; i++){
                cout<<multiplos_2_3[i]<<" ";
            }
        }else{
            cout<<0;
        }
        cout<<endl;

    delete[] numeros;
    delete[] multiplos_2;
    delete[] multiplos_3;
    delete[] multiplos_2_3;
    
    return 0;
}