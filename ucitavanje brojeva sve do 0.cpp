#include <iostream>
#include <cstdlib>

//ovaj program ucitava brojeve sve dok se ne ucita nula
using namespace std;
int main() 
{
	int a;
	cout<<"Unesi broj: "<<endl;
	cin>>a;
	while (a!=0)
	cin>>a;
	
	return 0;
}
