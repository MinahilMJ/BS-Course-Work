#include<cstdlib>

#include<iostream>


using namespace std;


int main()

{
    
int a,b;
    
cout<<"Enter the number";
    
cin>>b;
    
a=10;
    
if(b==a)
    
{
        
cout<<"You guessed the correct number"<<endl;
    
}
    
if(b>a||b<a)
    
	{
    
		do
    
	{
        
		if(b<a)
        
	{
            
		cout<<"Your guess is lower than the number"<<endl;
        
	}
        
		else if(b>a)
        
	{
            
		cout<<"Your guess is higher than the number"<<endl;
        
	}
   
 		cout<<"guess again";
    
}
    
	while(b==a);
    
}
    
return 0;

}