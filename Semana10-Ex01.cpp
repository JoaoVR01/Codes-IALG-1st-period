#include <iostream>

using namespace std;

string bomba(int matriz[15][15], int iBomba, int jBomba)
{
    if (matriz[iBomba][jBomba] == 1)
    {
        return "destroier";
    }
    else if (matriz[iBomba][jBomba] == 2)
    {
        return "fragata";
    }
    else if (matriz[iBomba][jBomba] == 3)
    {
        return "lancha";
    }
    else
    {
        return "agua";
    }
}

int main()
{
    int matriz[15][15];
    int i1, j1, i2, j2, i3, j3;
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            cin >> matriz[i][j];
        }
    }

    cin >> i1 >> j1 >> i2 >> j2 >> i3 >> j3;

    cout << bomba(matriz, i1, j1) << endl;
    cout << bomba(matriz, i2, j2) << endl;
    cout << bomba(matriz, i3, j3) << endl;

    return 0;
}