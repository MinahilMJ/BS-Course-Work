#include<iostream>
using namespace std;
int main()
{
    int Height;
    cout<<"H = ";
    cin>>Height;
    for(int i = 0; i < Height; i++)
    {
        for(int i = 0; i < Height; i++)
        {
            cout<<"* ";
        }
    cout<<" "<<endl;
    }
return 0;
}