#include<iostream>
using namespace std;
void Palindromic(int t, int b);
int main()
{
    int n,t,a,b=0;
    cout<<"Kindly enter a number"<<endl;
    cin>>n;
    t=n;
    while(n>0)
    {
       a=n%10;
       n=n/10;
       b=b*10+a;
    }
    Palindromic(t,b);
    return 0;
}
void Palindromic(int t, int b)
{
    if(t!=b)
    {
        cout<<t<<" is NOT Palindromic"<<endl;
    }
    else
    {
        cout<<t<<" is Palindromic"<<endl;
    }
}