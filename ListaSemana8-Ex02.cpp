#include <iostream>

using namespace std; 

int main(){
    int tamanho;
    bool resultado = true;
    cin>>tamanho;
    //criar vetores com alocação dinamica
    int *vetor1 = new int[tamanho];
    for(int i = 0; i < tamanho; i++){
        cin>>vetor1[i];
    }
    int *vetor2 = new int[tamanho];
    for(int i = 0; i < tamanho; i++){
        cin>>vetor2[i];
    }

    //checar se todos os elementos do vetor 1 aparecem no vetor 2 independente da posição do elemento
    int *controle = new int[tamanho];
    for(int i = 0; i < tamanho; i++){
        int j = 0;
        bool loop_control = true;
        while(j < tamanho and loop_control){
            if(vetor1[i] == vetor2[j]){
                controle[i] = 1;
                loop_control = false;
            }else{
                controle[i] = 0;
            }
            j++;
        }
    }

    for(int i = 0; i < tamanho; i++){
        if(controle[i] == 0){
            resultado = false;
        }
    }
    cout<<endl;
    if(resultado){
         cout<<"IGUAIS"<<endl;
    }else{
        cout<<"DIFERENTES"<<endl;
    }

    return 0;
}
