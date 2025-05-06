/*
Ponteiro: armazena endereços de memoria
Uso:
Acesso indireto a valores, muitas vezes sem 
necessidade de uma variável
Casting dinâmico de variáveis - 
(acesso de uma variável de um tipo como 
se fosse de outro)
Alocação e gerenciamento dinâmicos 
de memória

*/

#include <iostream>

using namespace std;

int main(){
    int num = 4;
    int* ponteiro = &num;
    cout<<ponteiro<<endl; //imprime o endereço de num
    cout<<*ponteiro<<endl; //imprime o valor de num
    cout<<&ponteiro<<endl; //imprime o endereço de ponteiro

    cout<<"--------------------------------------------"<<endl;

    int vetor[10];
    for (int i=0; i<10; i++){
	    cin >> vetor[i];
    }
    int* ptr1 = (int*) &vetor;  
    int* ptr2 = vetor; 
    cout << vetor << endl; //endereço do vetor(pois ele é um ponteiro)
    cout << &vetor << endl; //endereço do vetor
    cout << &vetor[1] << endl; //endereço do elemento de indice 1
    cout << ptr1 << endl; //endereço do vetor armazenado no ponteiro ptr1
    cout << ptr2 << endl; //endereço do vetor armazenado no ponteiro ptr2
    cout << *ptr1 << endl; //item de indice 0 do vetor
    //Se o ponteiro não apontar para nenhuma variavel deve-se iniciá-lo com o valor NULL ou nullptr

    return 0;
}