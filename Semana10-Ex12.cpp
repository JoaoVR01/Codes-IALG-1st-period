#include <iostream>

using namespace std;

int multi(int num1, int num2, int contador){
    if(contador < num2){
        return num1 + multi(num1, num2, contador + 1);
    }else{
        return 0;
    }
}

int main(){
    int contador = 0;
    int num1, num2;
    cin >> num1 >> num2;
    multi(num1, num2, contador);
    cout<<multi(num1, num2, contador)<<endl;

    return 0;
}