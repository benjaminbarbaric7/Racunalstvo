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
 	cout<<"Unesi ime: ";
 	cin>>ime;
 	cout<<endl;
 	cout<<"Unesi godine: ";
 	cin>>godine;
 	cout<<endl;
 	cout<<"Unesi PCigru: ";
 	cin>>pcigra;
 	
 	ofstream ispis("D:\\Benjamin Barbariæ\\nfo.txt");
 	ispis<<"**********¤¤¤¤¤**********"<<endl;
	 ispis<<"Ime: "<<ime<<endl; 
	 ispis<<"Godine: "<<godine<<endl;
	 ispis<<"PC igra: "<<pcigra<<endl;
	 ispis<<"**********¤¤¤¤¤**********"<<endl;
	ispis.close();
	return 0;
}
