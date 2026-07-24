#include<iostream>
using namespace std;
void sum(double a, char b, double c);
void Difference(double a, char b, double c);
void multiplication(double a, char b, double c);
void division(double a, char b, double c);
void pow(double a, char b, double c);
int main()
{
    double a, c;
    char b;
    cout<<"Enter the first number ";
    cin>>a;
    cout<<"Enter the mathematical operator ";
    cin>>b;
    cout<<"Enter the second number ";
    cin>>c;
    if(b =='+')
    sum(a, b, c);
    else if(b =='-')
    Difference(a, b, c);
    else if(b =='*')
    multiplication(a, b, c);
    else if(b =='/')
    division(a, b, c);
    else if(b =='^')
    pow(a, b, c);
    return 0;
}

void sum(double a, char b, double c)
{
   cout<<a<<" + "<<c<<" = "<<a+c; 
}
void Difference(double a, char b, double c)
{
   cout<<a<<" - "<<c<<" = "<<a-c; 
}
void multiplication(double a, char b, double c)
{
    cout<<a<<" * "<<c<<" = "<<a*c;
}
void division(double a, char b, double c)
{
    cout<<a<<" / "<<c<<" = "<<a/c;
}
void pow(double a, char b, double c)
{
        int product;
        product =1;
        for(int j=0;j<c;j++)
        {
            product=product*a;
        }
        cout<<a<<" ^ "<<c<<" = "<<product;
}