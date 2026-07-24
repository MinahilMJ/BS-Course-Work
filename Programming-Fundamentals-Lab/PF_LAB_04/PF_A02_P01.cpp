#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The number"<<endl;
    cin>>n;
    if(n<=1)
    {
        cout<<endl;
    }
    else if(n>=2)
    {
        int i=2,j=5;
        do
        {
            cout<<i<<"-"<<j<<"+";
            i+=2;
            j+=5;
        }
        while(i<=n);
    }
return 0;
}