#include <iostream>
//se numero de '('  == numero de ')' => parenteses corretos

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
    string operation;
    cin>>operation;
    if(count(operation, '(')  != 0 or count(operation, ')')){
        if(count(operation, '(') == count(operation, ')')){
            cout<<"parenteses corretos"<<endl;
        }else{
           cout<<"parenteses incorretos"<<endl;
        }
    }
    return 0;
}