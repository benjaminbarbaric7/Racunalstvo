#include <iostream>
#include <cstdlib>
#include <windows.h>
//program koji ispisuje cijele brojeve od 0 do 1000 s korakom 7
using namespace std;
int main() 
{
	int brojac;
	for(brojac=0; brojac <=1000; brojac+=7) {
		cout<<brojac<<" "<<endl;
		Sleep(250);
	}
	return 0;
}
