#include <iostream>
#include <fstream>

struct alunos
{
    char nome[100];
    int matricula;
    float nota;
};

using namespace std;

int main()
{
    // escrita dos dados em um arquivo binario
    alunos *informacaoAluno = new alunos[5];
    for (int i = 0; i < 5; i++)
    {
        cin.getline(informacaoAluno[i].nome, 100);
        cin >> informacaoAluno[i].matricula;
        cin >> informacaoAluno[i].nota;
        cin.ignore();
    }

    ofstream escrita("alunos.bin");
    escrita.write(reinterpret_cast<const char *>(&informacaoAluno), 5 * sizeof(alunos));
    escrita.close();

    // leitura dos dados de um arquivo binario
    ifstream leitura("alunos.bin");
    leitura.read(reinterpret_cast<char *>(&informacaoAluno), 5 * sizeof(alunos));

    // teste de leitura do arquivo
    cout << informacaoAluno[0].nome << endl
         << informacaoAluno[0].matricula << endl
         << informacaoAluno[0].nota << endl;

    // entrada da matricula para busca de dados
    int matricula, i = 0;
    bool controle = true;
    cout << "Informe matricula: " << endl;
    cin >> matricula;

    while (controle and i < 5)
    {
        if (informacaoAluno[i].matricula == matricula)
        {
            controle = false;
            cout << informacaoAluno[i].nome << endl
                 << informacaoAluno[i].nota << endl;
        }
        else
        {
            controle = true;
            
        }
        i++;
    }
    if (controle)
    {
        cout << "Matricula nao encontrada";
    }

    return 0;
}
