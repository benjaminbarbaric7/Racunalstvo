#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() 
{
	ofstream ispis ("D:\\Benjamin Barbariæ\\kvadrati.txt");
	int i;
	for (i=1; i<=10; i++) {
		ispis<<i*i<<endl;
	}
	ispis.close();
	system("PAUSE");
	return 0;
}
