#include <iostream>
#include <fstream>

struct datas
{
    int dia, mes, ano;
};

struct livros
{
    char titulo[50];
    char autor[50];
    datas data;
    char nomePessoa[50];
};

using namespace std;

int main()
{
    // leitura da quntidade de registros
    ifstream leitura("lista-negraNova");
    int tamanho;
    leitura.read(reinterpret_cast<char *>(&tamanho), sizeof(tamanho));

    // criação do vetor de registros
    livros *informacaoLivros = new livros[tamanho];
    leitura.read(reinterpret_cast<char *>(informacaoLivros), tamanho * sizeof(livros));
    for (int i = 0; i < tamanho; i++)
    {
        cout << informacaoLivros[i].titulo << endl
             << informacaoLivros[i].autor << endl
             << informacaoLivros[i].data.dia << "/" << informacaoLivros[i].data.mes << "/" << informacaoLivros[i].data.ano << endl
             << informacaoLivros[i].nomePessoa << endl;
    }

    // apagar resgistros mantendo a ordem

    string tituloApagado;
    cout << "Insira o titulo a ser apagado: " << endl;
    getline(cin, tituloApagado);

    for (int i = 0; i < tamanho; i++)
    {
        if (tituloApagado == informacaoLivros[i].titulo)
        {
            for (int j = i + 1; j < tamanho; j++)
            {
                informacaoLivros[j - 1] = informacaoLivros[j];
            }
        }
    }
    tamanho -= 1;
    ofstream escrita("lista-negraNova");
    // escrita no arquivo novo
    escrita.write(reinterpret_cast<const char *>(&tamanho), sizeof(tamanho));
    escrita.write(reinterpret_cast<const char *>(informacaoLivros), sizeof(livros)*tamanho);

    return 0;
}
