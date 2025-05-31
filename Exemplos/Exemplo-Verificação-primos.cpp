#include <iostream>
using namespace std;

bool primo(int num){ //funçao do tipo bool que recebe um inteiro
	int divisor = 2;
	while(divisor < num){ //laço de repetição while
		if(num % divisor == 0){
			return false;
		}else{
			divisor++;
		}
	}
	return true;
} 
/*
O laço while funcionara até o divisor ser maior que o numero.
Caso o resto da divisão não seja 0, o divisor é incrementado.
Se todos os divisores testados, até a condição do while ser
satisfeita, não derem resto 0 na divisão, a função retorna
true, ou seja, numero primo.
*/

int main(){
	int numero;
	cout << "Insira um número vara verificar se ele é primo:";
	cin >> numero;
	if(numero < 0){ //retirar os numeros negativos
		return -1;
	}
	cout << primo(numero) << endl;
	return 0;
}
