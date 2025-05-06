#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int a, aux;
	fstream entrada("entrada.txt");
	entrada>>a;
	int *vetor = new int[a];
	
	for(int i = 0; i < a; i++){
		if(i == 0){
			entrada>>vetor[i];
		}else{
			entrada>>aux;
			for(int j = 0; j <= i; j++){
				if(aux < vetor[i-j]){
					vetor[j] = vetor[i-j];
					vetor[i-j] = aux; 
				}
			}
		}
	}
	for(int i = 0; i < a; i++){
		cout<<vetor[i]<<" ";
	}
	
	return 0;
}
