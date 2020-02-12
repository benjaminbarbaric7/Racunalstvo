#include <cstdlib>
#include <iostream>

using namespace std;
char *str_boja[4] = {"Srce", "Tref", "Karo", "Pik"};
char *str_lik[13] = {"As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Dama", "Kralj"};
#define BROJ_KARATA 52

int main(void)
{
    int i, karte[BROJ_KARATA];
    //poredaj po redu
    for (i=0; i<BROJ_KARATA; i++)
    karte[i]=i;
    
    //izmijesaj zamjenom vrijednosti
    for (i=0; i<BROJ_KARATA; i++)
    {
        int k=rand() % BROJ_KARATA;
        int tmp=karte[i]; //Swap
        karte[i]=karte [k];
        karte[k]=tmp;
        }
    //ispisi
    for (i=0; i<52; i++)
    {
        cout<<str_boja[karte[i]/13]<<"-"
        <<str_lik[karte[i]%13]<<endl;
        }           
    system("PAUSE");
    return EXIT_SUCCESS;
}
