#include <iostream>

using namespace std;

int count(string text, char valor){
    int tamanho = text.size(), count = 0;
    for(int i = 0; i < tamanho; i++){
        if(text[i] == valor){
            count++;
        }
    }
    return count;
}

int main(){
    int num, maior = 0, indice_maior = 0;
    char c;
    cin>>num;
    string *palavras = new string[num];
    for(int i = 0; i < num; i++){
        cin>>palavras[i];
    }
    cin>>c;
    for(int i = 0; i < num; i++){
        if(count(palavras[i], c) >= maior){
            maior = count(palavras[i], c);
            indice_maior = i;
        }
    }
    cout<<palavras[indice_maior]<<endl;

    delete[] palavras;

    return 0;

}
