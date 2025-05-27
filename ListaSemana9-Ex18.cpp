#include <iostream>

using namespace std;

long hash_string(string palavra){
    const int UMPRIMO = 13;
    const int M = 10;
    long hash = 0;

    for (unsigned j = 0; j < palavra.size(); j++) {
        hash = (UMPRIMO * hash + palavra[j]) % M;   
    }
    return hash;
}

int main(){
    int tam;
    long hash_soma = 0;
    cin>>tam;
    string *palavras = new string[tam];
    for(int i = 0; i < tam; i++){
        cin>>palavras[i];
    }
    long *vetor_hash = new long[tam];
    for(int i = 0; i < tam; i++){
        vetor_hash[i] = hash_string(palavras[i]);
        cout<<vetor_hash[i]<<" ";
        hash_soma += hash_string(palavras[i]);
    }
    cout<<hash_soma<<endl;

    delete[] palavras;
    delete[] vetor_hash;

    return 0;
}