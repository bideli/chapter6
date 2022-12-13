#include <iostream>
#include <conio.h>
#include<cmath>
using namespace std;
double revenue(double );
int predict();
double r,r2;
int main()
{
    double t;
    double mony;
    do {
        cout << "\n enter year:";
        cin >> t;
    } while (t<=1984||t>2022);
    mony=revenue(t);
    cout<<"\n money until "<<t<<" is:"<<mony<<" million $.";

    cout << "\n enter money:";
    cin >> r2;
    t= predict();
    cout<<"\n until"<<t<<" you earn "<<r2;
    getch();
    return 0;
}
double revenue(double t )
{
    t=t-1984;
    r=203.265* pow(1.071,t);
    return r;
}
int predict()
{
    double t;
    t= log((r2/203.265));
    t=t+1984;
    return t;
}