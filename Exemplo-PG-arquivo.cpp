#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
	int n, k, ak, r;
	float an;
	ifstream arqEntrada("entrada.txt");
	arqEntrada >> n >> k >> ak >> r; //leitura dos numeros no arquivo. 
	//Dessa forma ocorre a leitura de cada linha para cada uma das variaveis
	//n = linha 1; k = linha 2; ak = linha 3...
	
	arqEntrada.close(); //fecha o arquivo
	
	an = ak * pow(r,(n-k));
	
	cout << an;

	return 0;
}
