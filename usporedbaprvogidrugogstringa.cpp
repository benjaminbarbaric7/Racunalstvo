#include <iostream>
#include <stdio.h>
#include <string.h>
#define MAX 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main()
 {
	char niz1[MAX];
	char niz2[MAX];
	cout<<"Unesite prvi string:  ";
	gets(niz1);
	cout<<"Unesite drugi string:  ";
	gets(niz2);
	int i= strcmpi (niz1, niz2);
	if (i==0) cout<<"Nizovi su jednaki.";
	else  cout<<"Nizovi nisu jednaki.";
	return 0;
}
