#include <iostream>

using namespace std;

int main(){
    int num, t_max = 0;
    cin>>num;
    string *palavras = new string[num];
    for(int i = 0; i < num; i++){
        cin>>palavras[i];
    }
    //Defininto o tamanho máximo
    for(int i = 0; i < num; i++){
		int tamanho_i = palavras[i].size();
        if(tamanho_i > t_max){
            t_max = palavras[i].size();
        }
    }
    //Adicionando os asteriscos
    string *resultado = new string[num];
    for(int i = 0; i < num; i++){
        int k = 0;
        resultado[i] = string(t_max, ' ');
        for(int j = 0; j < t_max; j++){
			int tamanho_i = palavras[i].size();
            if(j < t_max - tamanho_i){
                resultado[i][j] = '*';
            }else{
                resultado[i][j] = palavras[i][k++];
            }
        }
    }
    //Imprimir as palavras justificadas
    for(int i = 0; i < num; i++){
        cout<<resultado[i]<<endl;
    }

    delete[] palavras;
    delete[] resultado;

    return 0;
}
