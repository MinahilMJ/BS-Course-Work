#include<iostream>
using namespace std;

int StringLength(char text[])
{
    int length=0;

    while(text[length]!='\0')
    {
        length++;
    }

    return length;
}

bool SearchSubstring(char text[],char substring[])
{
    int textLength=StringLength(text);
    int substringLength=StringLength(substring);

    for(int i=0;i<=textLength-substringLength;i++)
    {
        int j=0;

        while(j<substringLength&&text[i+j]==substring[j])
        {
            j++;
        }

        if(j==substringLength)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int size;

    cout<<"Enter size of string: ";
    cin>>size;
    cin.ignore();

    char* text=new char[size];

    cout<<"Please enter string: ";
    cin.getline(text,size);

    char substring[100];

    while(true)
    {
        cout<<"Please enter substring: ";
        cin.getline(substring,100);

        if(SearchSubstring(text,substring))
        {
            cout<<"The entered substring is present in array."<<endl;
            break;
        }
        else
        {
            cout<<"Sorry entered substring is not present in array."<<endl;
        }
    }

    delete[] text;

    return 0;
}