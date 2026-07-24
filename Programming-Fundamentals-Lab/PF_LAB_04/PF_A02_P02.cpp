#include<iostream>
using namespace std;
int main()
{
    int n,a=1,b=1,next;
    cout<<"Enter a number";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    }
return 0;
}