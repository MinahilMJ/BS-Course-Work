#include<iostream>
using namespace std;

int StringLength(char* text)
{
    int length=0;

    while(*(text+length)!='\0')
    {
        length++;
    }

    return length;
}

void Encrypt(char* text,char key)
{
    int shift;

    if(key>='a'&&key<='z')
    {
        shift=key-'a';
    }
    else
    {
        shift=key-'A';
    }

    int index=0;

    while(*(text+index)!='\0')
    {
        char currentCharacter=*(text+index);

        if(currentCharacter>='a'&&currentCharacter<='z')
        {
            currentCharacter=currentCharacter+shift;

            if(currentCharacter>'z')
            {
                currentCharacter=currentCharacter-26;
            }

            *(text+index)=currentCharacter;
        }
        else if(currentCharacter>='A'&&currentCharacter<='Z')
        {
            currentCharacter=currentCharacter+shift;

            if(currentCharacter>'Z')
            {
                currentCharacter=currentCharacter-26;
            }

            *(text+index)=currentCharacter;
        }

        index++;
    }
}

int main()
{
    int size;

    cout<<"Enter Size of array: ";
    cin>>size;
    cin.ignore();

    char* text=new char[size];

    cout<<"Enter the array elements: ";
    cin.getline(text,size);

    int newSize=StringLength(text);

    char* resizedArray=new char[newSize+1];

    int index=0;

    while(*(text+index)!='\0')
    {
        *(resizedArray+index)=*(text+index);
        index++;
    }

    *(resizedArray+index)='\0';

    delete[] text;

    char key;

    cout<<"Enter the encryption key: ";
    cin>>key;

    Encrypt(resizedArray,key);

    cout<<"New Size of array: "<<newSize<<endl;
    cout<<"Encrypted array: "<<resizedArray<<endl;

    delete[] resizedArray;

    return 0;
}