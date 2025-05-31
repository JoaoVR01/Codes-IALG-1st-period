#include <iostream>

using namespace std;

int main(){
    string chave;
    int tamanho, semelhanca = 0;
    cin>>chave>>tamanho;
    string *palavras = new string[tamanho];
    int *semelhancas = new int[tamanho];

    for(int i = 0; i < tamanho; i++){
        cin>>palavras[i];
    }
    for(int i = 0; i < tamanho; i++){
        int j = 0;
        while(palavras[i][j] != '\0'){
            if(chave[j] == palavras[i][j]){
                semelhanca++;
            }
            j++;
        }
        semelhancas[i] = semelhanca;
        semelhanca = 0;
    }
    int maior_semelhanca = 0, indice_maior = 0;
    for(int k = 0; k < tamanho; k++){
        if(semelhancas[k] >= maior_semelhanca){
            maior_semelhanca = semelhancas[k];
            indice_maior = k;
        }
    }
    cout<<palavras[indice_maior];
    
    delete[] semelhancas;
    delete[] palavras;
    return 0;
}
