#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
int main() 
{
vector <int> primjer;	
primjer.push_back(3);
primjer.push_back(10);	
primjer.push_back(33);	
cout<<"Vektor 1. = "<<primjer[0]<<endl;
cout<<"Vektor 2. = "<<primjer[1]<<endl;
cout<<"Vektor 3. = "<<primjer[2]<<endl;

if(!primjer.empty() ) primjer.clear();
else cout<<"Vektor je prazan.";

vector<int> primjer2;
primjer2.push_back(10);
cout<<"Unesen je drugi vektor."<<endl;
if(primjer==primjer2) cout<<"Vektori su jednaki."<<endl;
else cout<<"Vektori nisu jednaki."<<endl;
cout<<"Sada ce se vektori izjednaciti"<<endl;

primjer=primjer2;
if(primjer==primjer2) cout<<"Vektori su jednaki."<<endl;
else cout<<"Vektori nisu jednaki."<<endl;

	system("PAUSE");
	return 0;
	
}
