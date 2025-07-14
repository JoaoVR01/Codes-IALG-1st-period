#include <iostream>

using namespace std;

void funcao(int numero, int i){
    if(i <= numero){
        cout << i << " ";
        funcao(numero, i+1);
    }
}

int main(){
    int numero, i = 0;
    cin >> numero;
    funcao(numero, i);
    cout << endl;
}
