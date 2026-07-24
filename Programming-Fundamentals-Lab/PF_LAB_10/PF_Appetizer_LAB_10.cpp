/*This C++ code prompts the user to enter the number of values they want to input, 
reads in those values into an array using the `cin_Array` function, 
and then outputs the contents of the array using the `cout_Array` function.
*/

#include<iostream>

using namespace std;

void cin_Array(int arr[100], int n)
{
    
	for(int a=0;a<n;a++)
    
	{
        
		cin>>arr[a];
    
	}

}


void cout_Array(const int arr[100],int n)

{
    
	for(int b=0;b<n;b++)
    
	{
        
		cout<<arr[b];
    
	}

}

int main()

{
    
	int n, arr[100];
    
	cout<<"Enter no Values ";
    
	cin>>n;
    
	cin_Array(arr,n);
    
	cout_Array(arr, n);
    
return 0;

}