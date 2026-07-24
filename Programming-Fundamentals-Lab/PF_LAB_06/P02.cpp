#include<iostream>
using namespace std;
int main()
{
	 int n, i, sum=0;
	 cout<<"Enter number ";
	 cin>>n;
	
	 for(i=0;i < n; i++)
	 {
    	  sum = sum+i;
	 
	  if(sum == n)
	  {
	   cout<<n<<" is TRIANGULAR NUMBER"<<endl;
	  }
	 }
	  if(sum != n)
	 {
	        cout<<n<<" is NOT TRIANGULAR NUMBER.";
	 }
	 
	 return 0;
}