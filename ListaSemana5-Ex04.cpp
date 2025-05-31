#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string nomes;
    int numero_alunos,i = 0;
    float nota1,nota2;
    ifstream entrada("entrada.txt");
    entrada>>numero_alunos;
    
    if(!entrada){
        cout<<"Arquivo não encontrado"<<endl;
    }
    ofstream saida("saida.txt");
    //utiliza o numero de alunos como controle do loop
    while(i < numero_alunos){
        entrada>>nomes;
        entrada>>nota1>>nota2;
        if((nota1+nota2)/2 < 7){
            saida<<nomes<<endl;
        }
        i++;
    }
    saida.close();

    return 0;
}
