#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int maior = 0, segundo_maior = 0, menor = 0, segundo_menor = 0, numero;
    int controle_a, controle_b;
    ifstream arquivo("entrada.txt");
    arquivo >> controle_a >> controle_b;

    //essa comparação existe para que os valores das variaveis sejam diferentes da seguinte forma:
    //maior e segundo maior com valores diferentes e menor e segundo menor com valores diferentes
    if(controle_a > controle_b){
        maior = controle_a;
        segundo_maior = controle_b;
        menor = controle_b;
        segundo_menor = controle_a;
    }else{
        maior = controle_b;
        segundo_maior = controle_a;
        menor = controle_a;
        segundo_menor = controle_b;
    }

    while(arquivo >> numero){
        if(numero > maior){
            segundo_maior = maior;
            maior = numero;
        }else if(numero > segundo_maior){
            segundo_maior = numero;
        }else if(numero < menor){
            segundo_menor = menor;
            menor = numero;
        }else if(numero < segundo_menor){
            segundo_menor = numero;
        }
    }
    cout<<menor<<endl<<segundo_menor<<endl<<maior<<endl<<segundo_maior<<endl;
    return 0;
}
