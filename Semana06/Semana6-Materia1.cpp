#include <iostream>

using namespace std;

/*
SINTAXE DE FUNÇÕES DE PROCEDIMENTOS:
tipo_retorno identificador_subprograma(tipo1 parâmetro1, …, tipoN parâmetroN)
{
   //Corpo (instruções) do subprograma
   //…
   return valor_retorno;
}
*/

/*
Função = retorna valor.
Procedimento = Não retorna valor (Tipo void)
*/

/*
Escopo de Variáveis:
Local = Só pode ser vista dentro da função ou procedimento na qual foi declarada.
Global: è visivel em qualquer parte do programa.

Evitar usar variáveis globais.
*/


//subprograma
float media_5(float v1, float v2, float v3, float v4, float v5){
    return (v1+v2+v3+v4+v5)/5;
}

int main(){
    float v1, v2, v3, v4, v5;
    float total;
    cin>>v1>>v2>>v3>>v4>>v5;
    //calculo energia:
    float energia = media_5(v1, v2, v3, v4, v5);
    //calculo agua:
    cin>>v1>>v2>>v3>>v4>>v5;
    float agua = media_5(v1, v2, v3, v4, v5);
    //despesas gerais
    total = agua + energia;
    cout<<total<<endl;

    return 0;
}
