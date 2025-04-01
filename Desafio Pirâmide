#include <iostream>
using namespace std;
int main(){
/*
 linha1 = [4,5]
 linha2 = [3,6]
 linha3 = [2,7]
 linha4 = [1,8]
 linha5 = [0,9]
 logo j inicial = x-(i+1) e deve ser menor que x+i
  
 */
	int x,y,i,j;
	cout<<"insira o tamanho da piramide: ";
	cin>>x;
	y = 2*x;
	char matrix[x][y];
	
	for(i = 0; i<x;i++){
		for(j = 0;j<y;j++){
			matrix[i][j] = ' ';
		}
	}
	
	for(i = 0; i<x;i++){
		for(j = x-(1+i);j<= x+i;j++){
			matrix[i][j] = '*';
		}
	}
	
	for(i = 0; i<x;i++){
		for(j = 0;j<y;j++){
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}
