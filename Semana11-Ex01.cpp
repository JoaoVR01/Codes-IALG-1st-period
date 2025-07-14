/*
Considerando a utilização de um registro, com coordenadas X e Y, para representar um ponto P no plano cartesiano, 
implemente um programa que, dado um conjunto N de retângulos, indique a quantidade dos mesmos nos quais o ponto P 
se encontra dentro de suas áreas. Defina um retângulo como um registro de dois campos do tipo Ponto, representando 
o vértice inferior esquerdo V1 e o vértice superior direito V2. Obs: considere que os retângulos são paralelos aos 
eixos cartesianos.

Entradas:

Dois inteiros representando as coordenadas (x,y) do ponto P no plano cartesiano.
Um número inteiro representando a quantidade de retângulos a serem analisados.
Sequência de valores inteiros representando as coordenadas dos vértices V1 e V2 de cada retângulo a ser analisado. 
Note que serão lidos 4 números inteiros para cada retângulo do problema, de modo que os dois primeiros números se 
referem as coordenadas (x,y) de V1 e os dois números seguintes as coordenadas (x,y) de V2.
Saídas:

Número inteiro que indica a quantidade de retângulos cujo ponto P se encontra dentro das áreas dos respectivos retângulos.
Exemplo de entrada:

2 3
4
1 1 3 3
2 1 5 5
0 0 2 2
3 5 7 8
Exemplo de saída:

2
*/

#include <iostream>


struct ponto{
    int x, y;
};

struct retangulo{
    ponto vertice1, vertice2;
};

bool pertence(retangulo retangulos, ponto pontoAnalise){
    if(pontoAnalise.x >= retangulos.vertice1.x and 
       pontoAnalise.x <= retangulos.vertice2.x and
       pontoAnalise.y >= retangulos.vertice1.y and
       pontoAnalise.y <= retangulos.vertice2.y){
        return true;
       }else{
        return false;
       }
}


using namespace std;

int main(){
    ponto Analise, V1, V2;
    int xAnalise, yAnalise, tamanhoVetor, quantidade = 0;
    cin >> xAnalise >> yAnalise;
    Analise.x = xAnalise;
    Analise.y = yAnalise;
    cin >> tamanhoVetor;
    retangulo *retangulos = new retangulo[tamanhoVetor];

    for(int i = 0; i < tamanhoVetor; i++){
        cin >> V1.x >> V1.y >> V2.x >> V2.y;
        retangulos[i].vertice1 = V1;
        retangulos[i].vertice2 = V2;
    }
    for(int i = 0; i < tamanhoVetor; i++){
        if(pertence(retangulos[i], Analise)){
            quantidade++;
        }
    }
    cout << quantidade << endl;

    return 0;
}