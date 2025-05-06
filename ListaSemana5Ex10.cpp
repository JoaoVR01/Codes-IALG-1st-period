#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string senhas;
    bool sentinel = true, acerto = false;
    int i = 0;
    ifstream tentativas("tentativas.txt");
    while(sentinel and i != 4){
        tentativas>>senhas;
        i++;
        if(senhas == "23031999"){
            sentinel = false;
            acerto = true;
        }
    }
    if(acerto){
        cout<<"acessou "<<i<<endl;
    }else{
        cout<<"nao "<<i<<endl;
    }

    return 0;
}