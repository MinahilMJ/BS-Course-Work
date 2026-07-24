#include<iostream>
using namespace std;


template<class T>
class Vector
{
private:

    T* arrayPtr;
    int capacity;
    int totalElements;


public:

    Vector(int size)
    {
        capacity=size;
        totalElements=0;

        arrayPtr=new T[capacity];
    }


    Vector(const Vector& obj)
    {
        capacity=obj.capacity;
        totalElements=obj.totalElements;

        arrayPtr=new T[capacity];


        for(int i=0;i<totalElements;i++)
        {
            arrayPtr[i]=obj.arrayPtr[i];
        }
    }


    void insertElement(T const& param)
    {
        if(totalElements==capacity)
        {
            capacity=capacity*2;


            T* newArray=new T[capacity];


            for(int i=0;i<totalElements;i++)
            {
                newArray[i]=arrayPtr[i];
            }


            delete[] arrayPtr;


            arrayPtr=newArray;
        }


        arrayPtr[totalElements]=param;

        totalElements++;
    }


    int getTotalElements()
    {
        return totalElements;
    }


    int getCapacity()
    {
        return capacity;
    }


    friend ostream& operator<<(ostream& output,const Vector<T>& obj)
    {
        for(int i=0;i<obj.totalElements;i++)
        {
            output<<obj.arrayPtr[i]<<" ";
        }

        return output;
    }


    ~Vector()
    {
        delete[] arrayPtr;
    }
};



int main()
{
    Vector<int> iv1(2);


    iv1.insertElement(5);

    iv1.insertElement(6);

    iv1.insertElement(1);



    Vector<int> iv2(iv1);



    cout<<iv2;


    return 0;
}