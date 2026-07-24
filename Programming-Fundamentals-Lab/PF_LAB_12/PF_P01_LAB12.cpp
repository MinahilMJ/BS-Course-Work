#include<iostream>
#include<string.h>
using namespace std;
bool isPalindrome(string text)
{
    int length;
    length=text.length();
    int i=0;
    if(text[i]==text[length-i-1])
    {
        for(;i<length/2;i++)
        {
            if(text[i]!=length)
            {
                text[length-i-1];
            }
            
        }
    cout<<"It is a Palindrome ";
    }
    else
    cout<<"It is not a Palindrome ";
    return true;
}
int main()
{
    string text ;
    cout<<"Enter Text ";
    cin>>text;
    isPalindrome(text);
    return 0;
}