#include<iostream>

using namespace std;

void i_am_joking(int n);

int main()

{
    
	int n;
    
	cout<<"Enter a number ";
    
	cin>>n;
    
	i_am_joking(n);
    
return 0;

}

void i_am_joking(int n)
{
    
	int m,a=0,b=0,o=0;
    
	while(n>0)
    
	{
        
		m=n%10;
        
		n=n/10;
        
		a=a+m;
    
	}
    
	while(a>0)
    
	{
        
		int t;
        
		t=a%10;
        
		a=a/10;
        
		b=b+t;
    
	}
    
	while(b>0)
    
	{
        
		int p;
        
		p=b%10;
        
		b=b/10;
        
		o=o+p;
    
	}
    
cout<<o<<endl;
    

}
