#include <iostream>

using namespace std;

int main(){
    string texto;
    char a, b;
    getline(cin, texto);
    int tam = texto.size();
    cin>>a>>b;
    for(int i = 0; i < tam; i++){
        if(texto[i] == a){
            texto[i] = b; 
        }
    }
    cout<<texto<<endl;

    return 0;
}