#include <vector>
#include <cmath>

int square_sum(const std::vector<int>& numbers) 
//edeclaração de vetores do c++: vector<type>  name

{
    int soma = 0;
    for(int x:numbers){ //o laço for itera sobre cada elemento do array numbers, não sendo necessario iniciar variavel de controle
      soma += pow(x,2);
    }
    return soma;
}

//exemplo de função usando for (mais parecido do que é em python)
