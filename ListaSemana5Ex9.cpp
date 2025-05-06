#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string jogador1, jogador2;
    int pontos_j1 = 0, pontos_j2 = 0;
    ifstream arquivo("boliche.txt");
    while (arquivo>>jogador1)
    {
        if(jogador1 == "VERDE"){
            pontos_j1++;
        }
        arquivo>>jogador2;
        if(jogador2 == "VERDE"){
            pontos_j2++;
        }
    }
    if(pontos_j1 > pontos_j2){
        cout<<"Jogador 1 é o ganhador da aposta"<<endl;
    }else if(pontos_j2 > pontos_j1){
        cout<<"Jogador 2 é o ganhador da aposta"<<endl;
    }

    return 0;
}