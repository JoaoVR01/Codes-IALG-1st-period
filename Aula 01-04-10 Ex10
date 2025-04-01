#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int dias;
	float valorLiquido;
	ifstream entrada ("entrada");
	entrada >>dias;
	valorLiquido=(dias*60) - (dias*60*0.08);
	ofstream saida ("saida");
	saida<<"R$ "<<valorLiquido;
	
	saida.close();
    return 0;
}
