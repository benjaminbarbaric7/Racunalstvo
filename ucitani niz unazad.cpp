#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
void nizunazad(string& str)
{
     int n=str.length();
     
     for (int i=0; i<n/2;i++)
     swap(str[i], str[n - i - 1]);
}
    
int main()
{
    string str="racunalstvo";
    nizunazad(str);
    cout<<str<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
