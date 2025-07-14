#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int numero, soma = 0;
    ifstream entrada("entrada.txt");//abre o arquivo para a leitura dos dados
    ofstream saida("saida.txt");//abre o arquivo para o recebimento dos dados 

    while(entrada >> numero){//loop para a leitura de todos os numeros
        do{//usamos o do-while para que a condição do loop seja testada após as mudanças
            soma = 0;//a variavel soma funciona como uma espécie de controle-seu resultado é atribuido à variavel numero
            while(numero > 0){
                //calculo para se obter todos os digitos de um numero(nesse caso obter a soma deles)
                soma += numero%10;
                numero /= 10;
            }
            numero = soma;
        }while(soma > 10);
        saida<<soma<<endl;
    }
    saida.close();
    return 0;
}