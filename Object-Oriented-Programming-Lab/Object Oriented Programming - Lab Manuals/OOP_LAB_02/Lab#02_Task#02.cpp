#include<iostream>
using namespace std;

void Counter(char text[],int& totalLetters,int& totalSpaces,int& upperCaseLetters,int& lowerCaseLetters,int& vowels,int& consonants)
{
    totalLetters=0;
    totalSpaces=0;
    upperCaseLetters=0;
    lowerCaseLetters=0;
    vowels=0;
    consonants=0;

    int index=0;

    while(text[index]!='\0')
    {
        char currentCharacter=text[index];

        if(currentCharacter==' ')
        {
            totalSpaces++;
        }
        else
        {
            totalLetters++;

            if(currentCharacter>='A'&&currentCharacter<='Z')
            {
                upperCaseLetters++;
            }

            if(currentCharacter>='a'&&currentCharacter<='z')
            {
                lowerCaseLetters++;
            }

            if(currentCharacter=='A'||currentCharacter=='E'||currentCharacter=='I'||currentCharacter=='O'||currentCharacter=='U'||
               currentCharacter=='a'||currentCharacter=='e'||currentCharacter=='i'||currentCharacter=='o'||currentCharacter=='u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        index++;
    }
}

int main()
{
    char text[200];

    cout<<"Enter Character Array:"<<endl;
    cin.getline(text,200);

    int totalLetters,totalSpaces,upperCaseLetters,lowerCaseLetters,vowels,consonants;

    Counter(text,totalLetters,totalSpaces,upperCaseLetters,lowerCaseLetters,vowels,consonants);

    cout<<endl;
    cout<<"No. of letters are: "<<totalLetters<<endl;
    cout<<"No. of spaces are: "<<totalSpaces<<endl;
    cout<<"No. of uppercase letters are: "<<upperCaseLetters<<endl;
    cout<<"No. of lowercase letters are: "<<lowerCaseLetters<<endl;
    cout<<"No. of vowels are: "<<vowels<<endl;
    cout<<"No. of consonants are: "<<consonants<<endl;

    return 0;
}