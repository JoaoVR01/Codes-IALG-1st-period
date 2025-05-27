#include <iostream>

using namespace std;

int count(string text, char c){
    int tam = text.size(), contador = 0;
    for(int i = 0; i < tam; i++){
        if(text[i] == c){
            contador++;
        }
    }
    return contador;
}

int main(){
    string text;
    int maior = 0, tam;
    char maior_c;
    cin>>text;
    tam = text.size();
    for(int i = 0; i < tam; i++){
        if(count(text, text[i]) > maior){
            maior = count(text, text[i]);
            maior_c = text[i];
        }
    }
    cout<<maior_c<<endl;


    return 0;
}