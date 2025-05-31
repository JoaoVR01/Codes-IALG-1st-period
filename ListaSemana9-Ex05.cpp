#include <iostream>

using namespace std;

int main(){
    string str, palavra;
    int indice, i = 0, j, k;
    bool control = true;
    cin>>str>>palavra;

    while(str[i] != '\0' and control){
        j = 0;
        k = i;
        while(palavra[j] == str[k] and palavra[j] != '\0'){
            j++;
            k++;
        }
        if(palavra[j] == '\0'){
            indice = i;
            control = false;
        }else{
            indice = -1;
        }
        i++;

    }
    cout<<indice<<endl;
    return 0;
}
