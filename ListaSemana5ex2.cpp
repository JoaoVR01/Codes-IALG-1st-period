#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int numero_triangular = 0, limite, i = 1;
    ifstream entrada("entrada.txt");
    entrada >> limite;
    ofstream saida("saida.txt");
    while(i <= limite){
        //numero_triangular =  (i*(i+1))/2;
        numero_triangular = i + numero_triangular;
        i++;
    }
    saida<<numero_triangular;
    saida.close();
    return 0;
}