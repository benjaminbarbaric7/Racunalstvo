#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
string sastavi(string A, string B, string C){
       return A+B+C;}
int main()
{
    string prvi;
    string drugi;
    string treci;
    cout<<"Unesi tri rijeci: (pritisni ENTER nakon unosa svake rijeci.)\n";
    getline(cin, prvi);
    getline(cin, drugi);
    getline(cin, treci);
    cout<<sastavi(prvi,drugi,treci);
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
