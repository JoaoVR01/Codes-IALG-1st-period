#include <iostream>
#include <cmath>

/*

Thanos aguarda pacientemente a chegada de seus comparsas, que irá lhe trazer, finalmente, mais jóias do infinito. 
Como ele está muito ansioso e irritado, implemente um algoritmo para calcular quanto tempo, em minutos, você, fiel escudeiro de Thanos, 
terá que suportar sua irritação. Para isso, você receberá o horário de saída da nave do comparsa e o horário prevista para chegada, 
que é informado em dois inteiros representando, respectivamente, horas e minutos. 
Para o cálculo, você irá levar em consideração que o tempo de viagem é inferior a 24 horas, 
já que os comparsas seriam destruídos caso demorassem mais que isso.

Entradas:

    Horário de saída da nave (dois inteiros representado horas e minutos)
    Horário previsto para chegada da nave (dois inteiros representado horas e minutos)

Saída:

    Tempo de espera, em minutos


*/

using namespace std;

int main(){
	int h1,m1,h2,m2,espera;
	cin>>h1>>m1>>h2>>m2;
	if(h2 > h1){
		espera = ((h2-h1)*60)+(m2-m1);
	}else if(h2 < h1){
		espera = (((h1-h2)/2)*60)+(m2-m1);
	}else{
		if(m1 < m2){
			espera = m2 - m1;
		}else if(m1 > m2){
			espera = 1440 - (m1-m2);
		}else{
			espera = 0;
		}
	}
	cout<<espera<<endl;
	
	return 0;
}
