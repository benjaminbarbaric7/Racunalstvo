#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    ifstream prosjek;
    float prosjekk;
    float broj_ocjena, ocjena_1, ocjena_2, ocjena_3, ocjena_4, ocjena_5;
    string predmet;
    prosjek.open("D:\\Benjamin Barbariæ\\Ocjene.txt");
    prosjek>>predmet;
    prosjek>>broj_ocjena;
    prosjek>>ocjena_1;
    prosjek>>ocjena_2;
    prosjek>>ocjena_3;
    prosjek>>ocjena_4;
    prosjek>>ocjena_5;
    cout<<predmet<<" naziv predmeta"<<endl;
    cout<<broj_ocjena<< " - broj ocjena"<<endl;
    cout<<ocjena_1<<endl;
    cout<<ocjena_2<<endl;
    cout<<ocjena_3<<endl;
    cout<<ocjena_4<<endl;
    cout<<ocjena_5<<endl;
    prosjekk=(ocjena_1+ocjena_2+ocjena_3+ocjena_4+ocjena_5)/broj_ocjena;
    cout<<"Prosjek ocjena iz "<<predmet<<" iznosi "<<prosjekk<<endl;;
    prosjek.close();
    system("PAUSE");
    return EXIT_SUCCESS;
}
