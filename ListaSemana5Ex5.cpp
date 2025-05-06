#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string product, nome_maior;
    int numero_products, vendidos, produzidos, restantes, i = 0, maior_quantidade = 0;
    ifstream estoque("estoque.txt");
    estoque>>numero_products;
    while(i < numero_products){

        estoque>>product;
        estoque>>produzidos>>vendidos;
        restantes = produzidos-vendidos;

        if (restantes > maior_quantidade){
            maior_quantidade = restantes;
            nome_maior = product;
        }
        
        if(restantes < 50){
            cout<<product<<" "<<restantes<<" BAIXO ESTOQUE"<<endl;
        }else{
            cout<<product<<" "<<restantes<<endl;
        }
        i++;
    }
    cout<<nome_maior<<" "<<maior_quantidade<<endl;

    return 0;
}
