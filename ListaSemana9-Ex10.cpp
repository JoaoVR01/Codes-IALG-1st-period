#include <iostream>

using namespace std;

int count(string text, char valor){
    int tam = text.size(), count = 0;
    for(int i = 0; i < tam; i++){
        if(text[i] == valor){
            count++;
        }
    }
    return count;
}

int main(){
    const double A = 71.03711+18.01056;
    const double C = 103.00919+18.01056;
    const double G = 57.02146+18.01056;
    const double T = 101.04768+18.01056;
    string proteina;
    long double peso_proteina;
    cin>>proteina;
    peso_proteina = count(proteina, 'A')*A + count(proteina, 'C')*C + count(proteina, 'G')*G + count(proteina, 'T')*T;
    cout<<peso_proteina;

}