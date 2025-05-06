#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int max, min, pontos,i=0;
    ifstream arquivo("dados.txt");
    arquivo>>min>>max;
    while(arquivo>>pontos){
        if(pontos>=min and pontos<=max){
            i++;
        }
    }
    cout<<i<<endl;

    return 0;
} 