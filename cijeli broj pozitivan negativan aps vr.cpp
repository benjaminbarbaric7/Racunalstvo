#include <iostream>
#include <cstdlib>
//Zadatak ispisuje je li broj pozitivan/negativan, te koja je njegova apsolutna vrijednost
using namespace std;
int main() 
{
	int a;
	cout<<"Upisi cijeli broj razlicit od 0: ";
	cin>>a;
	if (a<0) {
		cout<<"Broj "<<a<<" je negativan. Njegova apsolutna vrijednost je "<<a*(-1);
	}
	else
	cout<<"Broj "<<a<<" je pozitivan. Njegova apsolutna vrijednost je "<<a;
	return 0;
}
