#include<iostream>
using namespace std;
int main()
{
    double amt, D=0.1,Q=0.25,N=0.05,coin;
    int Dlr = 1;
    amt = 0;
    cout<<"Dollar = 1"<<endl<<"Dime = 0.1"<<endl<<"Quarter = 0.25"<<endl<<"Nickel = 0.05"<<endl;
    do{
        cout<<"Enter the coin ";
        cin>>coin;
        if(coin == 1||coin==0.1||coin==0.25||coin==0.05)
        {
            amt=amt+coin;
            cout<<amt<<endl;
        }
        else
        {
            cout<<"Invalid Amount of coin"<<endl;
        }
    }while(amt<3.50);
    cout<<"Enjoy your deep fried Twinkie"<<endl;
    return 0;
}