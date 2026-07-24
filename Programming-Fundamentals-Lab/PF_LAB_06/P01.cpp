#include<iostream>
using namespace std;
void max(int a, int b, int c)
{
    if (a>=b && a>=c && b>=c ||a>=b && a>=c && c>=b)
    cout<<"The largest number is "<<a<<endl;
    else if (b>=a && b>=c && c>=a || b>=a && b>=c && a>=c)
    cout<<"The largest number is "<<b<<endl;
    else 
    cout<<"The largest number is "<<c<<endl;
   
}
void min(int a, int b, int c)
{
    if (a<=b && a<=c && b<=c ||a<=b && a<=c && c<=b)
    cout<<"The smallest number is "<<a<<endl;
    else if (b<=a && b<=c && c<=a || b<=a && b<=c && a<=c)
    cout<<"The smallest number is "<<b<<endl;
    else
    cout<<"The smallest number is "<<c<<endl;
}
int main()
{
    int a,b,c;
    cout<<"Enter the first number "<<endl;
    cin>>a;
    cout<<"Enter the second number "<<endl;
    cin>>b;
    cout<<"Enter the third number "<<endl;
    cin>>c;
    max(a, b, c);
    min(a, b, c);
    return 0;
}