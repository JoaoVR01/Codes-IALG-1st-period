#include <iostream>

using namespace std;

bool in(int *vetor, int tamanho, int valor){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == valor){
            return true;
        }
    }
    return false;
}

int main(){
    int tamanho1, tamanho2, tamanho3 = 0;
    cin>>tamanho1;
    int *conjunto1 = new int[tamanho1];
    for(int i = 0; i < tamanho1; i++){
        cin>>conjunto1[i];
    }
    cin>>tamanho2;
    int *conjunto2 = new int[tamanho2];
    for(int i = 0; i < tamanho2; i++){
        cin>>conjunto2[i];
    }
    //União = junção dos elementos dos dois
    int *uniao = new int[tamanho1 + tamanho2];
    for(int i = 0; i < tamanho1; i++){
        if(!in(uniao, tamanho3, conjunto1[i])){
            uniao[tamanho3++] = conjunto1[i];
        }
    }
    for(int i = 0; i < tamanho2; i++){
        if(!in(uniao, tamanho3, conjunto2[i])){
            uniao[tamanho3++] = conjunto2[i];
        }
    }
    for(int i = 0; i < tamanho3; i++){
        cout<<uniao[i]<<" ";
    }

    delete[] conjunto1;
    delete[] conjunto2;
    delete[] uniao;

    return 0;
}