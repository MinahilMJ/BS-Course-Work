#include<iostream>
using namespace std;
void prime_num(int s, int e);
int main()
{
    int s,e;
    cout<<"Enter a start number"<<endl;
    cin>>s;
    cout<<"Enter a end number"<<endl;
    cin>>e;
    prime_num(s,e);
    
}
void prime_num(int s,int e)
{
    int i,j,x;
        for(i=s;i<=e;i++)
        {
           for(j=2;j<=i/2;j++)
           x=i%j;
           
           if(x!=0)
           {
               cout<<i<<endl;
           }
           
        }
}