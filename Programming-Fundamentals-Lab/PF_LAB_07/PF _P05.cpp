#include<iostream>
using namespace std;
int main()
{
    int n, sum, max, min,i=0;
    double avg;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n>0)
    {
        sum=sum+n;
        if(n>max)
        {
            max=n;
        }
        if(n<min)
        {
           min=n; 
        }
        cin>>n;
        i++;
    }
    avg=sum/i;
    cout<<"sum = "<<sum<<endl<<"avg = "<<avg<<endl<<"max = "<<max<<endl<<"min = "<<min<<endl;
    return 0;
}