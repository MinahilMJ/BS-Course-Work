#include<iostream>

using namespace std;

int main()
{
    double a,b;
    a=3.6;
    for(b=5;b<=30;b+=5)
    {
       cout<<"Number Of Calories burned after "<<b<<" minutes are "<<a*b<<endl; 
    }
    return 0;
}