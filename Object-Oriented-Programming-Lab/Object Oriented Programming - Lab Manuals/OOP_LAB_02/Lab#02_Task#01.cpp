#include<iostream>
using namespace std;

int* InputArray(int& size)
{
    cout<<"Enter Size of Array: ";
    cin>>size;

    int* array=new int[size];

    cout<<"Enter "<<size<<" elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }

    return array;
}

void OutputArray(const int* myArray,const int& size)
{
    // size is passed as const so that the function cannot modify its value.
    for(int i=0;i<size;i++)
    {
        cout<<myArray[i]<<" ";
    }
    cout<<endl;
}

int* CompressArray(int* originalArray,int& size)
{
    if(size==0)
    {
        return nullptr;
    }

    int newSize=1;

    for(int i=1;i<size;i++)
    {
        if(originalArray[i]!=originalArray[i-1])
        {
            newSize++;
        }
    }

    int* compressedArray=new int[newSize];

    compressedArray[0]=originalArray[0];
    int index=1;

    for(int i=1;i<size;i++)
    {
        if(originalArray[i]!=originalArray[i-1])
        {
            compressedArray[index]=originalArray[i];
            index++;
        }
    }

    size=newSize;

    return compressedArray;
}

int* Union(int* setA,int& size1,int* setB,int& size2,int& size3)
{
    int* tempArray=new int[size1+size2];

    int i=0;
    int j=0;
    int k=0;

    while(i<size1&&j<size2)
    {
        if(setA[i]<setB[j])
        {
            tempArray[k]=setA[i];
            i++;
            k++;
        }
        else if(setA[i]>setB[j])
        {
            tempArray[k]=setB[j];
            j++;
            k++;
        }
        else
        {
            tempArray[k]=setA[i];
            i++;
            j++;
            k++;
        }
    }

    while(i<size1)
    {
        tempArray[k]=setA[i];
        i++;
        k++;
    }

    while(j<size2)
    {
        tempArray[k]=setB[j];
        j++;
        k++;
    }

    size3=k;

    int* unionArray=new int[size3];

    for(int i=0;i<size3;i++)
    {
        unionArray[i]=tempArray[i];
    }

    delete[] tempArray;

    return unionArray;
}

int main()
{
    cout<<"Part A, B and C"<<endl;

    int size;

    int* array=InputArray(size);

    cout<<"Original Array: ";
    OutputArray(array,size);

    int* compressedArray=CompressArray(array,size);

    cout<<"Array after Compression: ";
    OutputArray(compressedArray,size);

    delete[] array;
    delete[] compressedArray;

    cout<<endl;
    cout<<"Part D"<<endl;

    int size1,size2,size3;

    cout<<"Array A"<<endl;
    int* setA=InputArray(size1);

    cout<<"Array B"<<endl;
    int* setB=InputArray(size2);

    int* unionArray=Union(setA,size1,setB,size2,size3);

    cout<<"A = {";
    for(int i=0;i<size1;i++)
    {
        cout<<setA[i];
        if(i!=size1-1)
        {
            cout<<",";
        }
    }
    cout<<"}"<<endl;

    cout<<"B = {";
    for(int i=0;i<size2;i++)
    {
        cout<<setB[i];
        if(i!=size2-1)
        {
            cout<<",";
        }
    }
    cout<<"}"<<endl;

    cout<<"A union B = {";
    for(int i=0;i<size3;i++)
    {
        cout<<unionArray[i];
        if(i!=size3-1)
        {
            cout<<",";
        }
    }
    cout<<"}"<<endl;

    delete[] setA;
    delete[] setB;
    delete[] unionArray;

    return 0;
}