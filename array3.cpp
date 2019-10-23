#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   int i;
   int zbroj=0;
   int A[10] = {20,19,18,17,16,15,14,13,12,11};
   for (i=0;i<10;i+=2) {
       cout<<"A["<<i<<"]="<<A[i]<<"  ";
zbroj+=A[i];
       
       }
       
       cout<<zbroj;
       cout<<endl; 
    system("PAUSE");
    return EXIT_SUCCESS;
}
