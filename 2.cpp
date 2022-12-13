#include <iostream>
#include <conio.h>
using namespace std;
void changeSalary();
double *salary;
int i;
int main()
{
    salary=new double[12];
    for ( i = 0; i < 12; i++)
    {
        cout<<"\n Enter salary of number "<<i+1<<":";
        cin>>*(salary+i);
    }
    changeSalary();

    getch();
    return 0;
}
void changeSalary()
{
    double sum;
    for (int j = 0; j < 12; ++j)
    {
        const float rate=2.5/100;
        double input=*(salary+j);
        double increase=*(salary+j)*rate;
        cout<<"\n The amount of salary increase number "<<j+1<<" is: "<<increase<<endl;
        cout<<"\n Before increase: "<< input<<"---> After increase: "<<increase+input<<endl<<endl;
        sum =sum+ increase;
    }
    cout<<"_________________\n\n The total amount of salary increase is:"<<sum;
}