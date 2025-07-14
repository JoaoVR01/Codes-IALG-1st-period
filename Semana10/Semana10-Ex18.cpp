#include <iostream>

using namespace std;

int *sequencia(int *vetor, int num, int i, int p1, int p2){
    if( i == num){
        return vetor;
    }
    if(i == 0){
        vetor[i] = p1;
    }
    else if(i == 1){
        vetor[i] = p2;
    }
    else{
        vetor[i] = vetor[i-1] + vetor[i-2];
    }
    return  sequencia(vetor, num, i+1, p1, p2);
}

int main(){
    int p1, p2, num, i = 0;
    cin >> p1 >> p2 >> num;
    int *vetor = new int[num];
    vetor = sequencia(vetor, num, i, p1, p2);
    for(int i = 0; i < num; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

}
