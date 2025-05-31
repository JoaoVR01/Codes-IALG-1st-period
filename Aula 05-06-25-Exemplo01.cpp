#include <iostream>

using namespace std;

int main(){
	float *a = new float, *b = new float, *resultado = new float;
	cin>>*a>>*b;
	*resultado  = (*a)*(*b);
	cout<<*resultado<<endl;
	cout<<&a<<endl<<&b<<endl<<&resultado<<endl<<endl;
	cout<<a<<endl<<b<<endl<<resultado<<endl<<endl;
	cout<< sizeof(a);
	delete a;
	delete b;
	delete resultado;
}
