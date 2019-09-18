#include <iostream>
#include <cstdlib>

//Program koji ispisuje je li temperatura topla ili hladna s obzirom na konstantu
using namespace std;

int main()
 {
 	float temp=24.5;
 	float a;
 	cout<<"Upisi temperaturu: "<<endl;
 	cin>>a;
 	if (a<temp) {
 		cout<<"hladno";
 	}
 	else
 	cout<<"toplo";
	return 0;
}
