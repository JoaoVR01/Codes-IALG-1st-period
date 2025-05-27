#include <iostream>

using namespace std;

int main(){
    string texto, inserir;
    int tam_texto, tam_inserir, position;
    cin>>texto>>position>>inserir;
    tam_texto = texto.size();
    tam_inserir = inserir.size();

    char *resultado = new char[tam_inserir+tam_texto];

    for(int i = 0; i < position; i++){
        resultado[i] = texto[i];
    }
    for(int i = 0; i < tam_inserir; i++){
        resultado[i+position] = inserir[i];
    }
    for(int i = position, j = tam_inserir+position; i < tam_texto; i++, j++){
        resultado[j] = texto[i];
    }

    resultado[tam_inserir+tam_texto] = '\0';

    cout<<resultado<<endl;
    delete[] resultado;

    return 0;
}