//21L-5679
//Assignment 01
//Question 01

#include<iostream>
using namespace std;
int main()
{
    char arr[100];
    const char *str[5]={"abandon", "absent", "cable", "calculate", "safety"};
    cout<<"Enter the sentence to paraphrased ";
    cin.get(arr, 100);
    cout<<arr;
    int index;
    for(int i=0;i<sizeof(arr);i++)
    {
        if(arr=="abandon")
        {
            const char *ptr0[2]={"discontinue", "vacate"};
            index=rand(*ptr0)%2;
        }
        if(arr=="absent")
        {
            char *ptr1[2]={"missing", "unavailable"};
            index=rand(*ptr1);
        }
        if(arr=="cable")
        {
            const char *ptr2[1]={"wire"};
            index=rand(*ptr2);
        }
        if(arr=="calculate")
        {
            const char *ptr3[3]={"compute", "determine", "measure"};
            index=rand(*ptr3);
        }
        if(arr=="safety")
        {
            const char *ptr4[2]={"security", "refuge"};
            index=rand(*ptr4);
        }
    }
        
        
    return 0;
}

//Assignment 02
//Question 02

#include<iostream>
using namespace std;
void twoDimToOneDim(int arr[50][50],int& rows,int& cols);
void sortarr(int array[50], int&rows, int& cols);
void showarr(int array[50], int&rows, int& cols);
void fillArray(int arr[50][50], int& rows, int& cols)
{
    if(rows>0 && cols>0)
    {
        cout<<"Fill the array: "<<endl;
        int i,j;
        for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
            {
                cin>>arr[i][j];
            }
        }
        twoDimToOneDim(arr, rows, cols);
    }
    else
        cout<<"Invalid Input. ";

}
void twoDimToOneDim(int arr[50][50], int& rows, int& cols)
{
    int array[50];
    int i=0,j=0;
        int a,b;
        for(a=0;a<rows;a++)
        {
            for(b=0;b<cols;b++)
            {
                array[a*cols+b]=arr[a][b];
            }
        }
        sortarr(array, rows, cols);
}
void sortarr(int array[50], int&rows, int& cols)
{
    int temp;
    for(int i=0;i<rows*cols;i++)
    {
        for(int j=i+1;j<rows*cols;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    showarr(array, rows, cols);
}
void showarr(int array[50], int&rows, int& cols)
{
    cout<<"Contents of 1D array are: ";
    for(int i=0;i<rows*cols;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int rows;
    int cols;
    int arr[50][50];
    cout<<"Enter the Number of Rows: ";
    cin>>rows;
    for(int i=0; i<rows;i++)
    {
        cout<<"Enter the numbers of columns in each row: ";
        cin>>cols;
    }
    fillArray(arr, rows, cols);
    return 0;
}
