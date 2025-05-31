#include <iostream>

using namespace std;

int main(){
    string chave, texto;
    int contador = 0, tam_texto, j, k;
    cin>>texto>>chave;
    tam_texto = texto.size();
    //mostrar quantas vezes chave está em texto
    for(int i = 0; i < tam_texto; i++){
        j = 0;
        k = i;
        while(texto[k] == chave[j] and chave[j] != '\0'){
            j++;
            k++;
        }
        if(chave[j] == '\0'){
            contador++;
        }
    }
    cout<<contador<<endl;

    return 0;
}
