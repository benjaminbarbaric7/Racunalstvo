#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	string velikaVijest=
	"Mislim da sam vidio Elvise u UFO. "
	"Danas sam izmjenio program. ";
	
	string zamjena= "CIA";
	string nadjiMe= "UFO";
	
	int i= velikaVijest.find(nadjiMe, 0);
	if (i != string::npos)
	velikaVijest.replace(i,zamjena.size(),zamjena);
	cout<<velikaVijest<<endl;
	
	
	return 0;
}
