#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    int voto_chapa1, voto_chapa2, soma_chapa1 = 0, soma_chapa2 = 0, total_votos = 0;
    string chapa1, chapa2, lugar;
    float porcentagem = 0;

    ifstream votos("eleicao.txt");
    votos>>chapa1>>chapa2;
    while(votos>>lugar){
        votos>>voto_chapa1;
        votos>>voto_chapa2;
        soma_chapa1 += voto_chapa1;
        soma_chapa2 += voto_chapa2;
    }
    total_votos = soma_chapa1+soma_chapa2;
    if(soma_chapa1>soma_chapa2){
        porcentagem = (float(soma_chapa1)/total_votos)*100;
        cout<<fixed<<setprecision(2)<<chapa1<<endl<<soma_chapa1<<endl<<porcentagem<<endl;
    }else if(soma_chapa2>soma_chapa1){
        porcentagem = (float(soma_chapa2)/total_votos)*100;
        cout<<fixed<<setprecision(2)<<chapa2<<endl<<soma_chapa2<<endl<<porcentagem<<endl;
    }

    return 0;
}