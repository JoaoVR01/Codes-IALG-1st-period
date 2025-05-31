#include <iostream>

using namespace std;

int main(){
    string numero;
    cin >> numero;
    char *vetor = new char[40];

    int tam = numero.size() - 1;
    int contador = 0;
    int tam_vet = 0;
    int tam_res = tam - 2;
    
    for(int i = 0; i < 40 and numero[tam_res] != '\0'; i++) {
        if(i < 2) {
            vetor[i] = numero[tam];
            tam--;
            tam_vet++;
        } else if(i == 2) {
            vetor[i] = ',';
            tam_vet++;
        } else {
            contador++;
            if(contador % 4 != 0) {
                vetor[i] = numero[tam_res];
                tam_res--;
                tam_vet++;
               
            } else {
                vetor[i] = '.';
                tam_vet++;
            }
        }
    }

    for(int i = tam_vet - 1; i >=0; i--) {
        cout << vetor[i];
    }

    delete[] vetor;
    return 0;
}
