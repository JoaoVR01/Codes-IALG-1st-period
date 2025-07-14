#include <iostream>

using namespace std;

int funcaoF(int);
int funcaoH(int numero){
    if(numero == 0)
        return 0;
   else{
        return funcaoH(numero - 1) + funcaoF(numero - 1);
    }
}


int funcaoF(int numero){
    if(numero == 0)
        return 1;
    else if(numero > 0 and numero%2 == 0){
        return 2*funcaoH(numero) + funcaoF(numero-1);
    }
    else{
        return 2*funcaoH(numero) - funcaoF(numero-1);
    }
}


int main(){
    int numero;
    cin >> numero;
    cout << funcaoF(numero) << endl;

    return 0;
}
