#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    //sequencia de mersenne = Mn = pow(2,N) - 1
    int N = 0, i = 0, mersenne = 0;
    bool control = true;
    ifstream entrada("senha.txt");
    ofstream saida("saida.txt");
    entrada >> N;
    while(control){
        mersenne = pow(2,i) - 1;
        if(mersenne > N){
            control = false;
        }else{
            saida<<mersenne<<"  ";
        }
        i++;
    }
    saida.close();

    return 0;
}
