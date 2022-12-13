#include <iostream>
#include <conio.h>
using namespace std;
void TimeMedicine();
int main()
{
    cout<<"\n In these times you should eat your medicine:\n";
    TimeMedicine();
    getch();
    return 0;
}
void TimeMedicine()
{
    cout<<"\n___________________________________________________________________";
    cout<<"\n| MEDICINE     |        TIME                                      |";
    cout<<"\n|______________|__________________________________________________|";
    cout<<"\n| IRON PILL    | 08:00 _ 12.00 _ 18:00                            |";
    cout<<"\n|______________|__________________________________________________|";
    cout<<"\n| ANTIBIOTIC   |";
    for (int clock = 4; clock <=24 ; clock=clock+4)
    {
        if(clock<10)
            cout<<" 0"<<clock<<":00 _ ";
        else
            cout<<clock<<":00 _ ";
    }
    cout<<"|";
    cout<<"\n|______________|__________________________________________________|";
    cout<<"\n| ASPIRIN      | 08:00 _ 21:00                                    |";
    cout<<"\n|______________|__________________________________________________|";
    cout<<"\n| DECONGESTANT | 11:00 _ 20:00                                    |";
    cout<<"\n|______________|__________________________________________________|";
}