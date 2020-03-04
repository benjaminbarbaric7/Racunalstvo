#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
 {
 	int i;
 	ofstream ispis("D:\\Benjamin Barbariæ\\test1.txt");
 	for (i=1; i<=100; i++) {
 		ispis << i << endl;
 	}
 	ispis.close();
 	system("PAUSE");
	return 0;
}
