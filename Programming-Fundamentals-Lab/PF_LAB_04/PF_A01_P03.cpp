#include<iostream>

using namespace std;

int main()
{
    int H,s,t,b;
    cout<<"H = ";
    cin>>H;
    
    for(s=0;s<=H;s++)
    {
        for(b=0;b<=H-s;b++)
        {
            cout<<"  ";
        }
        for(t=0;t<=H-b;t++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}