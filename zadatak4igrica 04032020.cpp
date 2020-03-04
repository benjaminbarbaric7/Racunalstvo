#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main()
 {
 	string ime;
 	int godine;
 	string pcigra;
 	ofstream ispis("D:\\Benjamin Barbariæ\\nfo.txt");
 	ispis<<"**********¤¤¤¤¤**********"<<endl;
 	ispis<<"Igrac: ";
 	ispis>>ime;

	ispis<<"Godina: ";
	ispis>>godine;

	ispis<<"PC igra: ";
	ispis>>pcigra;

	ispis<<"**********¤¤¤¤¤**********"; 
	return 0;
}
