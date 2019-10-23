#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i;
    int zbroj=0;
    int A[10] = {20,19,18,17,16,15,14,13,12,11};
    for(i=0;i<10;i++){
                      cout<<"A["<<i<<"]="<<A[i]<<" ";
              if (A[i]%2!=0)        
    zbroj+=A[i]; }
    
    cout<<"Zbroj neparnih: "<<zbroj;                  
    system("PAUSE");
    return EXIT_SUCCESS;
}
