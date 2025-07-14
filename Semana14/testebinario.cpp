#include <iostream>
#include <fstream>

using namespace std;

struct pesoas
{
	char nome[100];
	int idade;
};


int main(){
	int tam = 5;
	pesoas *info = new pesoas[tam];
	for(int i = 0; i < tam; i++){
		cin >> info[i].nome
			>> info[i].idade;
	}
	ofstream escrita("pessoas.bin");
	escrita.write(reinterpret_cast<const char*>(&info), tam*sizeof(info));
	escrita.close();

	return 0;
}
