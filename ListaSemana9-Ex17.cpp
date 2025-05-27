#include <iostream>
#include <fstream>

using namespace std;

string atbash(string texto){
    string criptografia;
    int tam = texto.size();
    criptografia = string(tam, ' ');
    //utilizar os indices da tabela ascii(A = 65, Z=90, espaco = 32)
    for(int i = 0; i < tam; i++){
        if(texto[i] == ' ' or texto[i] == '\n'){
            criptografia[i] = texto[i];
        }else{
            criptografia[i] = char(65+(90-int(texto[i])));
        }

    }
    return criptografia;

}

int main(){
    string texto, criptografia, linha, Arqnome;
    cin>>Arqnome;
    ifstream entrada(Arqnome);
    while(getline(entrada, linha)){
        texto += linha + '\n';
    }
    ofstream saida("cifrado.txt");
    criptografia = atbash(texto);
    saida<<criptografia;

    return 0;
}