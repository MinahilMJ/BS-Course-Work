#include<iostream>
using namespace std;


template<typename T>
T range(T** array,int rows,int columns)
{
    T maximum=array[0][0];
    T minimum=array[0][0];


    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(array[i][j]>maximum)
            {
                maximum=array[i][j];
            }

            if(array[i][j]<minimum)
            {
                minimum=array[i][j];
            }
        }
    }


    return ((maximum-minimum)/4)+minimum;
}



template<typename T>
void shiftColumns(T** array,int rows,int columns)
{
    T** shiftedArray=new T*[rows];


    for(int i=0;i<rows;i++)
    {
        shiftedArray[i]=new T[columns];
    }


    for(int i=0;i<rows;i++)
    {
        shiftedArray[i][0]=array[i][columns-1];

        for(int j=1;j<columns;j++)
        {
            shiftedArray[i][j]=array[i][j-1];
        }
    }


    cout<<"Shifted Matrix"<<endl;


    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<shiftedArray[i][j]<<" ";
        }

        cout<<endl;
    }


    for(int i=0;i<rows;i++)
    {
        delete[] shiftedArray[i];
    }

    delete[] shiftedArray;
}



int main()
{
    int rows=3;
    int columns=3;


    int** matrix=new int*[rows];


    for(int i=0;i<rows;i++)
    {
        matrix[i]=new int[columns];
    }


    matrix[0][0]='C';
    matrix[0][1]='A';
    matrix[0][2]='D';

    matrix[1][0]='H';
    matrix[1][1]='B';
    matrix[1][2]='I';

    matrix[2][0]='E';
    matrix[2][1]='G';
    matrix[2][2]='F';


    cout<<"Range: "<<range(matrix,rows,columns)<<endl;


    shiftColumns(matrix,rows,columns);



    for(int i=0;i<rows;i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;


    return 0;
}