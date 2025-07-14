#include <iostream>

using namespace std;

int main(){
    int tamnho, i = 0, j = 0;
    cin>>tamnho;
    while(i < tamnho){
        while (j < tamnho){
            if((i+j)%2==0){
                cout<<'#';
            }else if((i+j)%1==0){
                cout<<'.';
            }
            j++;
        }
        cout<<endl;
        i++;
        j = 0;
    }    

    return 0;
}
