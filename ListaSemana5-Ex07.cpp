#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int numero=0,anterior=0, i = 0;
    string arquivo;
    cin>>arquivo;
    ifstream entrada(arquivo);
    ofstream saida("dobro.txt");
    while(entrada>>numero){
        if(numero == anterior*2 and numero != 0){
            i++;
        }
        anterior=numero;
    }
    saida<<i<<endl;
    saida.close();
    return 0;
}
