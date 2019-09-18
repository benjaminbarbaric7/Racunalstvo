#include <iostream>
#include <cstdlib>
#include <windows.h>
//odbrojavanje od nekog broja do 0
using namespace std;
int main() 
{
	int brojac;
	int vrijeme;
	cout<<"Upisite vrijeme u sekundama: "<<endl;
	cin>>vrijeme;
	for(brojac=vrijeme; brojac>=0; brojac-- ){
		cout<<brojac<<endl;
		Sleep (1000);
	}
	return 0;
}
