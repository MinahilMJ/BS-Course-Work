#include <iostream>
using namespace std;
int main()
{

    double Number, Sum=0, avg,smallest,n=0,i=0;
    cout<<"Please Enter Your Numbers and a non-positive number to terminate";
    cin>> Number;
    while (Number > 0)
    {
       
        cout<<"Please Enter a Number ";
        cin>> Number;
        
        if(i==0)
        {
            smallest=Number;
            
            i=1;
        }
         if(Number<smallest && Number>0)
        {
           
           smallest=Number;
            
            
        }
           n++;
           Sum+= Number;
           avg=Sum/n;
    }

cout<<"Sum of the numbers you entered is "<<Sum<<endl;;
cout<<"The average of Numbers is "<<avg<<endl;
cout<<"The Smallest Number is "<<smallest<<endl;

return 0;
}