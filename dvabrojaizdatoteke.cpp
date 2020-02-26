#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    ifstream citaj; //moze biti bilo koji naziv, ne samo inFile
    int broj1, broj2;
    citaj.open("D:\\Benjamin Barbariæ\\Podaci.txt");
    citaj>>broj1; // isto kao cin
    citaj>>broj2; // isto kao cin
    cout<<broj1<<endl;
    cout<<broj2<<endl;
    cout<<"Suma brojeva "<<broj1<<" i "<<broj2<<" je: "<<broj1+broj2<<endl;
    citaj.close();
    system("PAUSE");
    return 0;
}
