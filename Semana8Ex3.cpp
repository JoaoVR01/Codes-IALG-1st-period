#include <iostream>

using namespace std;

int main(){
	int num, maior, menor;
	cin>>num;
	int *vetor = new int[num];
	for(int i = 0; i < num; i++){
		cin>>vetor[i];
	}
	for(int i = 0; i < num; i++){
		cout<<vetor[i]<<" ";
	}
	maior = vetor[0];
	menor = vetor[0];
	for(int i = 0; i < num; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}else if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	cout<<"Maior: "<<maior<<" Menor: "<<menor<<endl;
	delete[] vetor;
}
