#include<iostream>
using namespace std;

class BiggerInt
{
private:
    int* big_int_;
    int int_length_;

public:

    BiggerInt()
    {
        big_int_=nullptr;
        int_length_=0;
    }

    BiggerInt(int* array,int size)
    {
        int_length_=size;

        big_int_=new int[int_length_];

        for(int i=0;i<int_length_;i++)
        {
            big_int_[i]=array[i];
        }
    }

    BiggerInt(const BiggerInt& obj)
    {
        int_length_=obj.int_length_;

        if(obj.big_int_==nullptr)
        {
            big_int_=nullptr;
        }
        else
        {
            big_int_=new int[int_length_];

            for(int i=0;i<int_length_;i++)
            {
                big_int_[i]=obj.big_int_[i];
            }
        }
    }

    BiggerInt& operator=(const BiggerInt& obj)
    {
        if(this!=&obj)
        {
            delete[] big_int_;

            int_length_=obj.int_length_;

            if(obj.big_int_==nullptr)
            {
                big_int_=nullptr;
            }
            else
            {
                big_int_=new int[int_length_];

                for(int i=0;i<int_length_;i++)
                {
                    big_int_[i]=obj.big_int_[i];
                }
            }
        }

        return *this;
    }

    void SetValue(int* array,int size)
    {
        delete[] big_int_;

        int_length_=size;

        big_int_=new int[int_length_];

        for(int i=0;i<int_length_;i++)
        {
            big_int_[i]=array[i];
        }
    }

    int GetLength()
    {
        return int_length_;
    }

    int operator[](int index)
    {
        if(index>=0&&index<int_length_)
        {
            return big_int_[index];
        }

        cout<<"Index Out of Bounds"<<endl;
        return -1;
    }

    BiggerInt& operator++()
    {
        for(int i=0;i<int_length_;i++)
        {
            big_int_[i]++;
        }

        return *this;
    }

    BiggerInt operator++(int)
    {
        BiggerInt temp(*this);

        for(int i=0;i<int_length_;i++)
        {
            big_int_[i]++;
        }

        return temp;
    }

    BiggerInt& operator--()
    {
        for(int i=0;i<int_length_;i++)
        {
            big_int_[i]--;
        }

        return *this;
    }

    BiggerInt operator--(int)
    {
        BiggerInt temp(*this);

        for(int i=0;i<int_length_;i++)
        {
            big_int_[i]--;
        }

        return temp;
    }

    void Display()
    {
        if(big_int_==nullptr)
        {
            cout<<"No Value Assigned"<<endl;
            return;
        }

        for(int i=0;i<int_length_;i++)
        {
            cout<<big_int_[i];
        }

        cout<<endl;
    }

    ~BiggerInt()
    {
        delete[] big_int_;
    }
};

int main()
{
    int array[]={1,2,3,4,5};

    BiggerInt number1(array,5);

    cout<<"Original Number: ";
    number1.Display();

    ++number1;

    cout<<"After Pre Increment: ";
    number1.Display();

    number1++;

    cout<<"After Post Increment: ";
    number1.Display();

    --number1;

    cout<<"After Pre Decrement: ";
    number1.Display();

    number1--;

    cout<<"After Post Decrement: ";
    number1.Display();

    cout<<"Element at Index 2: "<<number1[2]<<endl;

    return 0;
}