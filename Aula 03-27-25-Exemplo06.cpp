#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	float p;
	p = float(a+b+c)/2; 
	//a divisão de um inteiro por um inteiro será um inteiro
	//se o denominador for menor que o numerador, a divisão de inteiros será 0
	cout << p;

}
