#include <iostream>
#include <fstream>

using namespace std;

struct Livraria{
    string titulo, autor;
    int quantidade;
    float price;
};

void compra(Livraria *vetor, int tamanho){
    bool controle = false;
    string nome;
    int quantidade, i_titulo;
    cout<<"Selecione o titúlo que deseja comprar: ";
    getline(cin, nome);
    for(int i = 0; i<tamanho; i++){
        if(vetor[i].titulo == nome){
            controle = true;
            i_titulo = i;
            i = tamanho;
        }
    }
    if(controle){
        cout<<"Disponivel no estoque!"<<endl;
        cout<<"Indique a quantidade: ";
        cin>>quantidade;
        if(quantidade <= vetor[i_titulo].quantidade){
            cout<<"Quantidade disponivel!";
        }else{
            cout<<"Quantidade insuficiente no estoque: ";
        }
        cout<<"Deseja proseguir com a compra? [Y/N]"<<endl;
        cin.ignore();
        char option;
        cin>>option;
        switch(option){
            case 'Y':
                cout<<"Compra realizada com sucesso!"<<endl;
                vetor[i_titulo].quantidade -= quantidade;
                break;
            case 'N':
                cout<<"Compra cancelada."<<endl;
        }
    }else{
        cout<<"Titulo não disponivel!"<<endl;
    }
}

void busca_info(Livraria *vetor, int tamanho){
    int option;
    string titulo, autor, teste;
    cout<<"Insira o tipo da busca: 1-Titulo|2-Autor: ";
    cin>>option;
    cin.ignore();
    bool encontrou = false, encontrou2 = false;
    int i_titulo;
    switch(option){
        case 1:
            cout<<"Insira o título: ";
            getline(cin,titulo);
            for(int i = 0; i < tamanho; i++){
                teste = vetor[i].titulo;
                if(vetor[i].titulo == titulo){
                    i_titulo = i;
                    encontrou = true;
                    i = tamanho;
                }
            }
            if(encontrou){
                cout<<"Titulo no estoque!"<<" "<<"Quantidade: "<<vetor[i_titulo].quantidade<<endl;
            }else{
                cout<<"Titulo não encontrado!"<<endl;
            }
            break;

        case 2:
            cout<<"Insira o nome do autor: ";
            getline(cin,autor);
            for(int i = 0; i < tamanho; i++){
                if(vetor[i].autor == autor){
                    encontrou2 = true;
                }
            }
            if(encontrou2){
                for(int i = 0; i < tamanho; i++){
                    if(vetor[i].autor == autor){
                        cout<<vetor[i].titulo<<"|"<<vetor[i].autor<<"|"<<vetor[i].quantidade<<"|"<<vetor[i].price<<endl;
                    }
                }
            }else{
                cout<<"Nenhuma obra do autor encontrada no estoque!"<<endl;
            }
            break;

        default:
            cout<<"Opção não encontrada!";
            break;
    }
}

void atualizar(Livraria *vetor, int tamanho, string cabecalho){
    ofstream escrita("Estoque_Livraria.csv");
        escrita<<tamanho<<endl;
        escrita<<cabecalho<<endl;
    for (int i = 0; i < tamanho; i++) {
        escrita<< vetor[i].titulo << "," << vetor[i].autor << ","<< vetor[i].quantidade << "," << vetor[i].price<<endl;
    }
    escrita.close();
    cout<<"Estoque atualizado com sucesso!";
}

int main(){
    int tamanho;
    string cabecalho;
    char lixo;
    
    ifstream leitura("Estoque_Livraria.csv");
    leitura>>tamanho;
    leitura>>cabecalho;
    leitura.ignore();

    Livraria *vetor_livros = new Livraria[tamanho];

    for(int i = 0; i < tamanho; i++){
        getline(leitura, vetor_livros[i].titulo, ',');
        getline(leitura, vetor_livros[i].autor, ',');
        leitura>>vetor_livros[i].quantidade;
        leitura>>lixo;//Tirar a virgula
        leitura>>vetor_livros[i].price;
        leitura.ignore();
    }
    cout<<"O que deseja? 1-Buscar|2-Comprar: ";
    int option;
    cin>>option;
    cin.ignore();
    switch(option){
        case 1:
            busca_info(vetor_livros, tamanho);
            break;
        case 2:
            compra(vetor_livros, tamanho);
            atualizar(vetor_livros, tamanho, cabecalho);
            break;
        default:
            cout<<"Opção não disponivel."<<endl;
            break;
    }

    delete[] vetor_livros;

    return 0;
}
