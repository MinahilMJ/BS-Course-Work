#include<iostream>

using namespace std;

void digimul(int n);

int main()

{
    
	int n;
    
	cout<<"Enter a number ";
    
	cin>>n;
    
	digimul(n);
    
	return 0;

}

void digimul(int n)
{
    
	int m,a=1;
    
	while(n>0)
    
	{
        
		m=n%10;
        
		n=n/10;
        
		a=a*m;
    
	}
    
    
	cout<<a<<endl;

}
