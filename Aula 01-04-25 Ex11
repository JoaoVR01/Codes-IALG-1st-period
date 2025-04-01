#include <iostream>
#include <fstream>

using namespace std;
int main(){
	float real, dolar, euro, libra;
	cin>>real;
	
	dolar = real / 2.13;
	euro = real / 2.84;
	libra = real / 3.34;
	
	ofstream arquivo ("salario.txt");
	arquivo << dolar<< endl << euro << endl << libra << endl;
	arquivo.close();
	return 0;
}
