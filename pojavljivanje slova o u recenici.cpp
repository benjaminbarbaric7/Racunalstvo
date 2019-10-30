#include <iostream>

using namespace std;

int main() 
{
cout<<"Program prebrojava pojavljivanje slova o u recenici"<<endl;
int i,brojo;
brojo=0;
char X[]="Koliko slova o ima u ovoj recenici?";
for(i=0;X[i]!='\0';i++){
	if(X[i]=='o'){
		brojo=brojo+1;
	}
}
cout<<endl<<"U znakovnom nizu:"<<endl
<<"Koliko slova o ima u ovoj recenici?"<<endl<<"ima "<<brojo<<" slova o."<<endl;
	return 0;
}
