#include<iostream>

using namespace std;

void Suma(int a, int b);
int N1,N2; 

int main()
{
    
	cout<<"Introduzca el valor del primer operador: ";
	cin>>N1;
	cout<<"Introduzca el valor del segundo operador: ";
	cin>>N2;
	Suma(N1,N2);
	
	return 0;
}

void Suma(int a, int b)
{
	int c = a + b;
	cout<<"El resultado de "<<N1<< "+" <<N2<<" es: "<<c<<endl;
}
