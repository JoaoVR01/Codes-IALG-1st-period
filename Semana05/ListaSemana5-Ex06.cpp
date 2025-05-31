#include <iostream>
#include <fstream>

/*
Valor do ingresso do dia 6 de julho até o dia 13 (inclusive):

Estudantes: 15% de desconto
Adultos: 10% de desconto
Valor do ingresso a partir do dia 14 até o dia 24 de julho (inclusive):

Estudantes: 10% de desconto
Adultos: 5% de desconto
*/

using namespace std;

int main(){
    float price, soma = 0;
    int dia;
    char categoria;
    ifstream ingressos("ingresso.txt");
    ingressos>>price;

    while(ingressos>>dia){
        ingressos>>categoria;
        if(dia>=6 and dia<=13){
            switch (categoria)
            {
            case 'E':
                soma += price*0.85;
                break;
            case 'A':
                soma += price*0.90;
                break;
            }
        }else if(dia>=14 and dia<=24){
            switch (categoria)
            {
            case 'E':
                soma += price*0.90;
                break;
            
            case 'A':
                soma += price*0.95;
                break;
            }
        }else{
            soma+=price;
        }
    }
    cout<<soma<<endl;

    return 0;
}
