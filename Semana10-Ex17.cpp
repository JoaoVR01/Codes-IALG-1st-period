#include <iostream>

using namespace std;

int fatorialDuplo(int numero){
    if(numero <= 0){
        return 1;
    }else{
        return numero*fatorialDuplo(numero-2);
    }
}

int main(){
    int numero;
    cin >> numero;
    cout << fatorialDuplo(numero) << endl;

    return 0;
}