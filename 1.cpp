#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int choice;
void func1();
void func2();
void func3();
void func4();
void func5();
int main()
{
    bool start= true;
    char ans;
    while (start== true)
    {
        do {
            cout << "\n Enter your choice:(1/2/3/4/5)" << endl;
            cin >> choice;
        } while (choice < 1 || choice > 5);
        switch (choice) {
            case 1:
                func1();
                break;
            case 2:
                func2();
                break;
            case 3:
                func3();
                break;
            case 4:
                func4();
                break;
            default:
                func5();
                break;
        }
        cout<<"\n Do you want to try agan?(y/n):";
        cin>>ans;
        if(ans=='y')
            start=true;
        else
            start= false;
    }
    getch();
    return 0;
}
void func1()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
            cout<<i<<"\t";
        cout<<endl;
    }
}
void func2()
{
    for(int i=6;i>=1;i--)
    {
        for (int j = 1 ;j<=i; j++)
            cout << j<< "\t";
        cout <<endl;
    }
}
void func3()
{
    int i,j,k;
    for( i=1;i<=5;i++)
    {
        for ( j=5;j>i;j-- )
            cout<<" "<<"\t";
        for( k=j;k>=1;k--)
            cout <<k<< "\t";
        cout <<endl;
    }
}
void func4()
{
    for(int i=0;i<=4;i++)
    {
        for (int j = 0 ;j<=i; j++)
            cout << j*i<< "\t";
        cout <<endl;
    }
}
void func5()
{
    for(int i=1;i<=7;i++)
    {
        for(int j=i;j<7;j++)
            cout <<" "<< "\t";
        for(int j=1;j<=i;j++)
            cout <<pow(2,j)/2<< "\t";
        for(int j=i-1;j>=1;j--)
            cout <<pow(2,j)/2<< "\t";
        cout <<endl;
    }
}
