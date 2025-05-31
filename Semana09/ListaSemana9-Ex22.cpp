#include <iostream>

using namespace std;

bool in_string(string *vetor, int t, string valor){
    for(int i = 0; i < t; i++){
        if(vetor[i] == valor){
            return true;
        }
    }
    return false;
}

void preenche(string *vetor, int t){
    for(int i = 0; i < t; i++){
        cin>>vetor[i];
    }
}

int main(){
    int t1, t2, t3, contador;
    cin>>t1;
    string *lista1 = new string[t1];
    preenche(lista1, t1);
    cin>>t2;
    string *lista2 = new string[t2];
    preenche(lista2, t2);
    cin>>t3;
    string *lista3 = new string[t3];
    preenche(lista3, t3);

    for(int i = 0; i < t3; i++){
        contador = 0;
        if(in_string(lista1, t1, lista3[i])){
            contador++;
        }
        if(in_string(lista2, t2, lista3[i])){
            contador++;
        }
        cout<<contador<<' ';
    }

    delete[] lista1;
    delete[] lista2;
    delete[] lista3;

    return 0;
}
