#include <iostream>
#include <fstream> //biblioteca de manipulação de arquivos

using namespace std;

int main(){
	int num, d1, d2, d3, soma;
	string arqNome;
	cin >> arqNome;
	ifstream arqEntrada(arqNome);
	
	arqEntrada >> num;
	d1 = num%10;
	d2 = (num/10)%10;
	d3 = (num/100)%10;
	
	soma = d1+d2+d3;
	cout << "Soma dos digitos:\t"<< soma << endl;
	
	ofstream arqSaida("saida.txt"); //Abertura de arquivo
	arqSaida << "Soma dos digitos:\t"<<soma;
	arqSaida.close();
	
	
	
	return 0;
}
