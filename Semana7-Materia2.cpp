/*
Passagem por ponteiro e passagem de vetor como parametro:
Passagem por ponteiros:
int foo3(int *a, int* b);
⇛ Esse é um caso específico de passagem por cópia, mas a cópia é do endereço da variável. 
Assim, os valores também podem ser alterados (como na passagem por referência), uma vez 
que se tem acesso à variável (por conta de seu endereço). Essa passagem também recebe o 
nome de passagem por referência indireta.

A passagem de vetores como parametros sempre é uma passagem por referência e pode ser feita de duas maneiras:
1= tipo_função nome_função(tipo vetor[], int tamanho_vetor){}

2= tipo_função nome_função(tipo* vetor, int tamanho_vetor){}
*/

#include <iostream>

using namespace std;
void torca(int* A, int* B){
    int aux = *A;
    *A = *B;
    *B = aux;
}

int main(){
    int A, B;
    cin>>A>>B;
    cout<<"Antes do procedimento: "<<A<<" "<<B<<endl;
    torca(&A, &B);
    cout<<"Depois do procedimento: "<<A<<" "<<B<<endl;
    
    return 0;
}