#include <iostream>

using namespace std;

int main(){
    int carga_limite, qtd_galinha, qtd_vaca, qtd_cavalo;
    cin>>carga_limite>>qtd_galinha>>qtd_vaca>>qtd_cavalo;
    int peso_galinha = qtd_galinha*2;
    int peso_vaca = qtd_vaca*150;
    int peso_cavalo = qtd_cavalo*250;

    if(peso_galinha > carga_limite){
        qtd_galinha = (peso_galinha-carga_limite)/2;
    }else{
        qtd_galinha = 0;
    }
    carga_limite -= peso_galinha;

    if(peso_vaca > carga_limite){
        if((peso_vaca-carga_limite)%150 != 0){
        qtd_vaca = ((peso_vaca-carga_limite)/150)+1;
        }else{
            qtd_vaca = ((peso_vaca-carga_limite)/150);
        }
    }else{
        qtd_vaca = 0;
    }
    carga_limite -= peso_vaca;

    if(peso_cavalo > carga_limite){
        if((peso_cavalo-carga_limite)%250 != 0){
            qtd_cavalo = ((peso_cavalo-carga_limite)/250)+1;
            }else{
                qtd_cavalo = ((peso_cavalo-carga_limite)/250);
            }
    }else{
        qtd_cavalo = 0;
    }

    cout<<qtd_cavalo<<endl<<qtd_vaca<<endl<<qtd_galinha<<endl;

    return 0;
}