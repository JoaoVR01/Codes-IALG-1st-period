/*
Passagem de parâmetros:
Passagem por copia: as variaveis passadas como parametros não tem seu valor modificado dentro do subprograma.
Faz uma copia do valor da variavel

Passagem por referência: Não é feita uma cópia da variável.
Um parâmetro que seja alterado internamente no subprograma irá refletir essa alteração no código externo ao subprograma.
Para indicar que um parâmetro está sendo passado por referência, em C++, utiliza-se o símbolo &.
*/
#include <iostream>

using namespace std;
void torca(int &A, int &B){
    int aux = A;
    A = B;
    B = aux;
}

int main(){
    int A, B;
    cin>>A>>B;
    cout<<"Antes do procedimento: "<<A<<" "<<B<<endl;
    torca(A, B);
    cout<<"Depois do procedimento: "<<A<<" "<<B<<endl;
    
    return 0;
}
