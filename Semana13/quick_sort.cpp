#include <iostream>

using namespace std;

int particiona(int *v, int i_0, int i_f){
    int pivo = v[i_0], i = i_0+1, j = i_f;
    while(i <= j){
        if(v[i] <= pivo){
            i++;
        }else if(pivo <= v[j]){
            j--;
        }else{
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    v[i_0] = v[j];
    v[j] = pivo;
    return j;
}

void quicksort(int *v, int i_pivo, int i_f){
    int i_new_pivo;
    if(i_pivo < i_f){
        i_new_pivo = particiona(v, i_pivo, i_f);
        quicksort(v, i_pivo, i_new_pivo - 1);
        quicksort(v, i_new_pivo + 1, i_f);
    }
}

int main(){
    int t;
    cin>>t;
    int *vet = new int[t];
    for(int i = 0; i < t; i++){
        cin>>vet[i];
   }
   quicksort(vet, 0, t-1);
   for(int i = 0; i < t; i++){
    cout<<vet[i]<<" ";
   }

    return 0;
}
