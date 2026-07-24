#include<iostream>

using namespace std;

int main()

{
    
int L,W,H,Area;
    
cout<<"Enter the Length"<<endl;
    
cin>>L;
    
cout<<"Enter the Width"<<endl;
    
cin>>W;
    
cout<<"Enter the Height"<<endl;
    
cin>>H;
    
Area=2*(L*W)+2*(W*H)+(H*L);
    
cout<<"Area = "<<Area<<endl;

    
return 0;

}