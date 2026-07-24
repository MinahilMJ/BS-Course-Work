/*This C++ code prompts the user to input a sequence of characters, the length of the sequence, and a specific character. 
Then, it counts the number of occurrences of the specified character within the given sequence and outputs the count.*/


#include<iostream>

using namespace std;

void countcharacter(char text[100], int length, char character)

{
    
	int count=0;
    
	for(int i=0;i<length;i++)
    
	{
        
		if(text[i]==character)
        
		count++;
    
	}
    
	cout<<count;

}

int main()

{
    
	char text[100];
    
	int length;
    
	char character;
    
	cout<<"Enter the sequence of characters ";
    
	cin.get(text, 100);
    
	cout<<"Enter the length ";
    
	cin>>length;
    
	cout<<"Enter the character ";
    
	cin>>character;
    
	countcharacter(text, length, character);
    
	return 0;

}