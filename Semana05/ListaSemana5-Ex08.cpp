#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main(){
    string nome_arquivo;
    char c;
    int i;
    cin>>nome_arquivo;
    ifstream arquivo(nome_arquivo);
    while (arquivo>>c)
    {
        c = tolower(c);
        if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'){
            i++;
        }
    }
    cout<<i<<endl;
    

    return 0;
}
