#include <iostream>

using namespace std;

int main(){
	int num;
	cin>>num;
	int *vetor = new int[num];
	for(int i = 0; i < num; i++){
		cin>>vetor[i];
	}
	for(int i = 0; i < num; i++){
		cout<<vetor[i]<<" ";
	}
	delete[] vetor;
}
