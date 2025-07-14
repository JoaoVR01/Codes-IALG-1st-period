#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    //serie de leibniz: pi = 4*(pow(-1, n)/(2*n + 1))

    int termos, i = 0;
    double pi = 0, serie = 0;
    cout<<"Número de termos: ";
    cin>>termos;
    while(i < termos){
        serie += (pow(-1, i)/(2*i + 1));
        i++;
    }
    pi = serie*4;
    cout<<fixed<<setprecision(6)<<pi<<endl;

    return 0;
}
