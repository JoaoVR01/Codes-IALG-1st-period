#include <iostream>
#include <fstream>

using namespace std;

string cesar_5(string texto){
    string criptografia;
    int tam = texto.size();
    criptografia = string(tam, ' ');
    //utilizar os indices da tabela ascii(A = 65, Z=90, espaco = 32)
    for(int i = 0; i < tam; i++){
        if(int(texto[i]) > 85){
            criptografia[i] = char(int('A')+(int(texto[i]) - 86));
        }else{
            criptografia[i] = char(int(texto[i])+5);
        }
        if(texto[i] == ' ' or texto[i] == '\n'){
            criptografia[i] = texto[i];
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
    criptografia = cesar_5(texto);
    saida<<criptografia;

    return 0;
}
