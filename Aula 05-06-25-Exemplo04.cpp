#include <iostream>

using namespace std;

int main(){
	int a, produtoescalar = 0;
	cin>>a;
	int *vetor1 = new int[a], *vetor2 = new int[a];
	
	for(int i = 0; i < a; i++){
		cin>>vetor1[i];
	}
	for(int i = 0; i < a; i++){
		cin>>vetor2[i];
	}
	for(int i = 0; i < a; i++){
		produtoescalar += (vetor1[i]*vetor2[i]);
	}
	cout<<produtoescalar;
	
	return 0;
}
