#include<iostream>

using namespace std;

int main()

{
    
int F_Thousand,Thousand,F_Hundred,x,y,z,Total;
    
cout<<"Enter the number of Five Thousand Note"<<endl;
    
cin>>F_Thousand;
    
cout<<"Enter the number of One Thousand Note"<<endl;
    
cin>>Thousand;
    
cout<<"Enter the number of Five Hundred Note"<<endl;
    
cin>>F_Hundred;
    
x=5000*F_Thousand;
    
y=1000*Thousand;
    
z=500*F_Hundred;
    
Total=x+y+z;
    
cout<<"Total "<<Total<<endl;
    
return 0;

}