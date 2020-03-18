#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
	string recenica;
	int brojac=0;
	getline(cin,recenica);
	for(int i=0; i<=recenica.length(); i++) {
		if(recenica[i]==' '||recenica[i]=='.'||recenica[i]=='!'||recenica[i]=='?') brojac++;
		
		if(recenica[i]!=' ') cout<<recenica[i];
		else if (recenica[i]==' ') cout<<", ";
		
		}
	cout<<endl<<"Recenica ima "<<brojac<<" rijeci."<<endl;	
	system("PAUSE");
	return 0;
}
