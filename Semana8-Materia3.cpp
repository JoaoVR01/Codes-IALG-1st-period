/*
Alocação dinâmica de memória:
Variáveis alocadas dinamicamente não têm nome, 
elas são utilizadas por meio de seus endereços, 
ou seja, utilizamos ponteiros para essa tarefa.

Em C++ a alocação dinâmica é feita por meio do operador new: 
new recebe o tipo de dado a ser alocado (ou seja, é um ponteiro tipado)
new encontra o bloco de memória com o tamanho necessário
new retorna o endereço (da primeira posição) do bloco alocado
O endereço de memória retornado pelo operador new usualmente é armazenado em um ponteiro.
*/

#include <iostream>
using namespace std;
int main(){
    int N;
    int *ptr = new int[N];
    ptr[0] = 9;
    ptr[34] = 12;
    cout<<ptr<<endl; //retorna o endereço de memoria encontrado pelo operador new
    delete[] ptr;
    return 0;
}