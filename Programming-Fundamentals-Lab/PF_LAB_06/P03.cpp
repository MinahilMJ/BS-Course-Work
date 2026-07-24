#include<iostream>
using namespace std;

void pow(int x,int i)
{
    int product;
    product =1;
    for(int j=0;j<i;j++)
    {
        product=product*x;
    }
    cout<<product;
}

int main()
{
    int x,i;
    cout<<"Enter the number ";
    cin>>x;
    cout<<"Enter the power ";
    cin>>i;
    pow(x,i);
    return 0;
}