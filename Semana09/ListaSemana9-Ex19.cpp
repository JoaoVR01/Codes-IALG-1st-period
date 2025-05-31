#include <iostream>

using namespace std;

bool in_string(string *vetor, int tam, string valor){
    for(int i = 0; i < tam; i++){
        if(vetor[i] == valor){
            return true;
        }
    }
    return false;
}

int main(){
    int tamanho1, tamanho2, contador = 0;
    cin>>tamanho1;
    string *lista1 = new string[tamanho1];
    for(int i = 0; i < tamanho1; i++){
        cin>>lista1[i];
    }
    cin>>tamanho2;
    string *lista2 = new string[tamanho2];
    for(int i = 0; i < tamanho2; i++){
        cin>>lista2[i];
    }

    for(int i = 0; i < tamanho1; i++){
        if(in_string(lista2, tamanho2, lista1[i])){
            contador++;
        }
    }

    if(contador){
        for(int i = 0; i < tamanho1; i++){
            if(in_string(lista2, tamanho2, lista1[i])){
                cout<<lista1[i]<<endl;
            }
        }
    }else{
        cout<<"NADA"<<endl;
    }
    
    delete[] lista1;
    delete[] lista2;
    
    return 0;
}
