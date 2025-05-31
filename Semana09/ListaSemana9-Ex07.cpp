#include <iostream>

using namespace std;

//função que indica se um caractere especifico está na string
bool in(string text, char valor){
    int tam = text.size();
    for(int i = 0; i < tam; i++){
        //se o caractere é encontrado, a função retorna true
        if(text[i] == valor){
            return true;
        }
    }
    //se o caractere não é encontrado, a função retorna false
    return false;
}

int main(){
    int num, contador = 0;
    char c;
    cin>>num;
    //criação de um vetor de strings com alocação dinâmica (permite tamanho variavel)
    string *vetor = new string[num];
    for(int i = 0; i < num; i++){
        cin>>vetor[i];
    }
    cin>>c;
    for(int i = 0; i < num; i++){
        //se a função in não encontrar o caracter na palavra o contador é incrementado
        if(!in(vetor[i], c)){
            contador++;
        }
    }
    cout<<contador<<endl;
    delete[] vetor;

    return 0;
}
