#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    string text;
    string word;
    int text_length, found=-1;
    cout<<"Enter the Text ";
    getline(cin, text);
    text_length=text.length();
    cout<<"Enter the Word ";
    cin>>word;
    for(int i=0; i<text.length();i++)
    {
        if(text[i]==word[0])
        found=i;
    }
    if(found==-1)
    cout<<word<<" was not found" ;
    else
    cout<<word<<" was found at index "<<found;
    
   return 0;
   }
    