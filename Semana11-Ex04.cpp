#include <iostream>

using namespace std;

struct InfoAlunos{
    int matricula;
    string nome;
    float nota1, nota2;
    char sexo;
};

float mediaNotas(InfoAlunos *alunos, int numAlunos, char tipo){
    float media = 0;
    int contador = 0;
    switch(tipo){
        case 'G':
        for(int i = 0; i < numAlunos; i++){
            media += alunos[i].nota1;
            media += alunos[i].nota2;
        }
        media = media/(float(2*numAlunos));
        break;
        case 'F':
        for(int i = 0; i < numAlunos; i++){
            if(alunos[i].sexo == 'F'){
                media += alunos[i].nota1;
                media += alunos[i].nota2;
                contador++;
            }
        } 
        media = media/(float(2*contador));
        break;
        case 'M':
        for(int i = 0; i < numAlunos; i++){
            if(alunos[i].sexo == 'M'){
                media += alunos[i].nota1;
                media += alunos[i].nota2;
                contador++;
            }
        }
        media = media/(float(2*contador));
        break;
            default:
            media = 0;
        break;
    }
    return media;
}

int main(){
    int numAlunos;
    cin >> numAlunos;
    InfoAlunos *aluno = new InfoAlunos[numAlunos];

    for(int i = 0; i < numAlunos; i++){
        cin >> aluno[i].matricula >> aluno[i].nome >> aluno[i].nota1 >> aluno[i].nota2 >> aluno[i].sexo;
    }
    cout << mediaNotas(aluno, numAlunos, 'G') << endl
         << mediaNotas(aluno, numAlunos, 'M') << endl
         << mediaNotas(aluno, numAlunos, 'F');

    return 0;
}