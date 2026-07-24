#include<iostream>

using namespace std;

int main()

{
    
int a,b,c;
    
cout<<"Enter First value"<<endl;
    
cin>>a;
    
cout<<"Enter Second value"<<endl;
    
cin>>b;
    
cout<<"Enter Third value"<<endl;
    
cin>>c;
    
if(a<b&&a<c&&b<c)
    
{ 
        
	cout<<"Numbers in descending order are:"<<endl<<c<<endl<<b<<endl<<a<<endl; 
    
}
   
else if(a<b&&a<c&&c<b)
    
{ 
       
	cout<<"Numbers in descending order are:"<<endl<<b<<endl<<c<<endl<<a<<endl;  
    
}
    
else if(c<a&&c<b&&a<b)
    
{ 
        
	cout<<"Numbers in descending order are:"<<endl<<b<<endl<<a<<endl<<c<<endl; 
    
}
    
else if(b<c&&b<a&&c<a)
    
{ 
        
	cout<<"Numbers in descending order are:"<<endl<<a<<endl<<c<<endl<<b<<endl; 
    
}
    
else if(b<a&&b<c&&a<c)
    
{ 
        
	cout<<"Numbers in descending order are:"<<endl<<c<<endl<<a<<endl<<b<<endl; 
    
}
    
else if(c<a&&c<b&&b<a)
    
{ 
        
	cout<<"Numbers in descending order are:"<<endl<<a<<endl<<b<<endl<<c<<endl; 
    
}
   
    
return 0;

}