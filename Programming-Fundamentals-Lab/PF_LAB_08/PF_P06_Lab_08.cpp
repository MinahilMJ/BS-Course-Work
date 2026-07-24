#include<iostream>

using namespace std;

void swap(int a, int b);

int main()

{
    
	int a,b;
    
	cout<<"Alpha in First Row"<<endl;
    
	cin>>a;
    
	cout<<"Beta in Second Row"<<b<<endl;
    
	cin>>b;
    
	swap(a,b);
    
return 0;

}

void swap(int a, int b)

{
    
	int t;
    
	t=a;
    
	a=b;
    
	b=t;
    
	cout<<"Alpha in First Row "<<endl<<a<<endl<<"Beta in Second Row "<<endl<<b<<endl;

}