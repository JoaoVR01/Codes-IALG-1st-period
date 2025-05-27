#include <iostream>

using namespace std;

int count(string str, char valor){
    int tamanho = str.size(), count = 0;
    for(int i = 0; i < tamanho; i++){
        if(str[i] == valor){
            count++;
        }
    }
    return count;
}

int main(){
    string texto;
    char c;
    bool control = true;
    int i = 0;
    cin>>texto;
    while(texto[i] != '\0' and control){
        if(count(texto, texto[i]) == 1){
            c = texto[i];
            control = false;
        }
        i++;
    }
    cout<<c<<endl;

    return 0;
}