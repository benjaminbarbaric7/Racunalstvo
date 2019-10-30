#include <iostream>

using namespace std;

int main() 
{
int i,b;
b=0;
char X[]="Otorinolaringologija";
for(i=0;X[i]!='\0';i++){
	if(X[i]=='l'||'L'){
		b=b+1;
	}
	cout<<X[i]<<endl;
}
if(b>0){
	cout<<"Slovo L ili l postoji"<<endl;
}
	return 0;
}
