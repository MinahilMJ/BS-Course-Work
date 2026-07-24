#include<iostream>
using namespace std;

char** AllocateMemory(int& rows,int& cols)
{
    cout<<"Enter number of rows: ";
    cin>>rows;

    cout<<"Enter number of columns: ";
    cin>>cols;

    char** matrix=new char*[rows];

    for(int i=0;i<rows;i++)
    {
        *(matrix+i)=new char[cols];
    }

    return matrix;
}

char** InputMatrix(char** matrix,const int rows,const int cols)
{
    cout<<"Enter matrix elements:"<<endl;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>*(*(matrix+i)+j);
        }
    }

    return matrix;
}

void DisplayMatrix(char** matrix,const int& rows,const int& cols)
{
    cout<<"Matrix:"<<endl;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<*(*(matrix+i)+j)<<" ";
        }

        cout<<endl;
    }
}

void SeparateCharacters(char** matrix,int rows,int cols,char*& alphabets,char*& numbers,char*& specialCharacters,int& alphabetSize,int& numberSize,int& specialSize)
{
    alphabetSize=0;
    numberSize=0;
    specialSize=0;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            char currentCharacter=*(*(matrix+i)+j);

            if((currentCharacter>='A'&&currentCharacter<='Z')||(currentCharacter>='a'&&currentCharacter<='z'))
            {
                alphabetSize++;
            }
            else if(currentCharacter>='0'&&currentCharacter<='9')
            {
                numberSize++;
            }
            else
            {
                specialSize++;
            }
        }
    }

    alphabets=new char[alphabetSize];
    numbers=new char[numberSize];
    specialCharacters=new char[specialSize];

    int alphabetIndex=0;
    int numberIndex=0;
    int specialIndex=0;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            char currentCharacter=*(*(matrix+i)+j);

            if((currentCharacter>='A'&&currentCharacter<='Z')||(currentCharacter>='a'&&currentCharacter<='z'))
            {
                *(alphabets+alphabetIndex)=currentCharacter;
                alphabetIndex++;
            }
            else if(currentCharacter>='0'&&currentCharacter<='9')
            {
                *(numbers+numberIndex)=currentCharacter;
                numberIndex++;
            }
            else
            {
                *(specialCharacters+specialIndex)=currentCharacter;
                specialIndex++;
            }
        }
    }
}

void DeleteMatrix(char** matrix,int rows)
{
    for(int i=0;i<rows;i++)
    {
        delete[] *(matrix+i);
    }

    delete[] matrix;
}

void DisplayArray(char* array,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<*(array+i)<<" ";
    }

    cout<<endl;
}

int main()
{
    int rows;
    int cols;

    char** matrix=AllocateMemory(rows,cols);

    matrix=InputMatrix(matrix,rows,cols);

    DisplayMatrix(matrix,rows,cols);

    char* alphabets;
    char* numbers;
    char* specialCharacters;

    int alphabetSize;
    int numberSize;
    int specialSize;

    SeparateCharacters(matrix,rows,cols,alphabets,numbers,specialCharacters,alphabetSize,numberSize,specialSize);

    cout<<"Alphabets = ";
    DisplayArray(alphabets,alphabetSize);

    cout<<"Numbers = ";
    DisplayArray(numbers,numberSize);

    cout<<"Special Characters = ";
    DisplayArray(specialCharacters,specialSize);

    delete[] alphabets;
    delete[] numbers;
    delete[] specialCharacters;

    DeleteMatrix(matrix,rows);

    return 0;
}