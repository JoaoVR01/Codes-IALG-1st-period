#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    //estimativa_atual = (estimativa_atual+(numero/estimativa_atual))/2

    double numero;
    cout<<"Número: ";
    cin>>numero;
    double estimativa_atual = numero/2.0, erro, estimativa_passada;
    erro = 1.0;//começar com um valor suficientemente grande de erro
    while(erro >= 0.0001){
        estimativa_atual = (estimativa_atual+(numero/estimativa_atual))/2;
        erro = abs(estimativa_atual-estimativa_passada);//erro deve ser sempre positivo
        estimativa_passada = estimativa_atual;
    }
    cout<<fixed<<setprecision(6)<<"Raiz quadrada aproximada: "<<estimativa_atual<<endl;


    return 0;
}