#include <iostream>

using namespace std;

int main() {
    int vetor[7];
    int numero;
    int respostaI = 0, respostaJ = 0, respostaK = 0;
    bool sentinel = true, resposta = false;

    for (int i = 0; i < 7; i++) {
        cin >> vetor[i];
    }

    cin >> numero;

    int i = 0;
    while (i < 5 && sentinel) {
        int j = i + 1;
        while (j < 6 && sentinel) {
            int k = j + 1;
            while (k < 7 && sentinel) {
                if (vetor[i] + vetor[j] + vetor[k] == numero) {
                    respostaI = i;
                    respostaJ = j;
                    respostaK = k;
                    sentinel = false;
					resposta = true;
                }
                k++;
            }
            j++;
        }
        i++;
    }

    if (resposta) {
        cout << vetor[respostaI] << " " << vetor[respostaJ] << " " << vetor[respostaK] << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
