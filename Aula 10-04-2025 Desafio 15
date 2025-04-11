Pedro Álvares Cabral precisa organizar as caravelas para carregarem os cavalos, as vacas e as galinhas necessárias para a viagem para as Índias.

A caravela possui um limite de carga e você deverá calcular a quantidade máxima de cada tipo de animal que a caravela poderá carregar. Lembre-se que Cabral possui uma quantidade limitada de cada tipo de animal, além disso, ele também informou qual o tipo de animal que é prioritário e que tipo de informação ele precisa para poder finalizar sua tarefa.

A tabela abaixo apresenta o peso de cada tipo de animal:
Tipo 	Peso
Cavalo 	250
Vaca 	150
Galinha 	2

Informações extras:

    O objetivo é colocar o máximo de animais, dessa forma os animais de pequeno porte tem prioridade.
    Ao final do processo é necessário ter como informação a quantidade de cada animal que não pode ser incluído na caravela.

Entradas:

    Limite de Carga (Inteiro).
    Quantidade de cavalos disponíveis (Inteiro).
    Quantidade de vacas disponíveis (Inteiro).
    Quantidade de galinhas disponíveis (Inteiro).

Saída:

    Quantidade de animais que NÃO podem ser incluídos numa caravela na seguinte ordem: Cavalos, Vacas e Galinhas.


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int carga_max, cavalo, vaca, galinha;
	cin >> carga_max >> cavalo >> vaca >> galinha;
	
	int peso_cavalo = cavalo*250;
	int peso_vaca = vaca*150;
	int peso_galinha = galinha*2;
	
	//analise das galinhas
	carga_max -= peso_galinha;
	if(carga_max >= 0){
		galinha -= (peso_galinha/2);
	}else{
		galinha = (abs(carga_max/2));
	}
	
	//analise das vacas
	carga_max -= peso_vaca;
	if(carga_max >= 0){
		vaca -= (peso_vaca/150);
	}else{
		vaca = (abs(carga_max/150));
	}
	
	//analise de cavalos
	if(carga_max >= peso_cavalo){
		cavalo -= (peso_cavalo/250);
	}else{
		cavalo = (abs(carga_max/250));
	}
	
	cout<<endl<<cavalo<<endl<<vaca<<endl<<galinha;
	
	return 0;
}

