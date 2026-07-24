#include<iostream>

using namespace std;

string isodd (int n)
{
    
	string a;
    
	if(n % 2 ==0)
    
	{
        
		a = " False ";
    
	}
    
	else 
    
	{
        
		a = " True";
    
	}
    
return a;

}



int main()

{
    
	int n;
    
	cin>>n;
    
	cout<< isodd (n)<<endl;
    
return 0;

}