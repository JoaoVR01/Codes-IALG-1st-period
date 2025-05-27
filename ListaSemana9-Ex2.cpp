#include <iostream>

using namespace std;

int count_substring(string texto, string palavra){
    int tamanho = texto.size(), j, k, counter;
    if(texto[0] == '\0'){
        return 0;
    }
    for(int i = 0; i < tamanho; i++){
        j = 0;
        //indice de comparação sem avançar o indice i
        k = i;
        while(texto[k] == palavra[j] and palavra[j] != '\0'){
            //O loop incrementa os indicices até o caractere ser igual ao da palavra procurada e a palavra procurada acabar
            j++;
            k++;
        }
        if(palavra[j] == '\0'){
            //se a palavra chegou ao fim, foi porque todos os caracteres analizados eram iguais aos da palavra procurada
            counter++;
            i++;
        }
    }
    return counter;
}

int main(){
    string texto, palavra;
    int contador;
    cin>>texto>>palavra;
    contador = count_substring(texto, palavra);
    cout<<contador<<endl;


    return 0;
}