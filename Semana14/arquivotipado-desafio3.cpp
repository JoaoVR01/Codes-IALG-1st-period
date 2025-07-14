#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    srand(time(NULL));
    int *num = new int[6];
    for(int i = 0; i < 6; i++){
        num[i] = rand()%60;
    }

    ofstream escrita("apostamegasena");
    escrita.write(reinterpret_cast<const char*>(num), sizeof(int)*6);

    return 0;
}
