#include <iostream>
using namespace std;
int main()
{
int Count =0;
double Number, Sum, n, Avg, Largest=0;
cout<<"Please Enter a the value of n ";
cin>> n;
while (Count < n)
{
    cout<<"Please Enter a Number ";
    cin>> Number;
    if(Largest<Number)
    {
        Largest=Number;
        Sum+= Number;
        Avg=Sum/n;
        Count++;
    }
    else if(Largest>Number)
    {
        Largest=Number;
        Sum+= Number;
        Avg=Sum/n;
        Count++;
    }
}
cout<<endl<<"The sum of n Numbers is "<<Sum<<endl;
cout<<endl<<"The average of n Numbers is "<<Avg<<endl;
cout<<endl<<"The Largest Number is "<<Largest<<endl;

    return 0;
}