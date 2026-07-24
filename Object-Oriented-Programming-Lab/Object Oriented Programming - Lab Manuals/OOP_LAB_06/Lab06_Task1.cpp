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

    BiggerInt(const int* obj,int size)
    {
        int_length_=size;
        big_int_=new int[int_length_];

        for(int i=0;i<int_length_;i++)
        {
            big_int_[i]=obj[i];
        }
    }

    BiggerInt(const BiggerInt& obj)
    {
        cout<<"Copy Constructor Called"<<endl;

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

    void assign(const BiggerInt& obj)
    {
        if(this==&obj)
        {
            return;
        }

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

    void assign(const int* big_int,int size)
    {
        delete[] big_int_;

        int_length_=size;

        big_int_=new int[int_length_];

        for(int i=0;i<int_length_;i++)
        {
            big_int_[i]=big_int[i];
        }
    }

    void display()
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

    void append(const BiggerInt& obj)
    {
        if(obj.big_int_==nullptr)
        {
            return;
        }

        int newLength=int_length_+obj.int_length_;

        int* newArray=new int[newLength];

        int index=0;

        for(int i=0;i<int_length_;i++)
        {
            newArray[index]=big_int_[i];
            index++;
        }

        for(int i=0;i<obj.int_length_;i++)
        {
            newArray[index]=obj.big_int_[i];
            index++;
        }

        delete[] big_int_;

        big_int_=newArray;
        int_length_=newLength;
    }

    void append(const int* big_int,int size)
    {
        int newLength=int_length_+size;

        int* newArray=new int[newLength];

        int index=0;

        for(int i=0;i<int_length_;i++)
        {
            newArray[index]=big_int_[i];
            index++;
        }

        for(int i=0;i<size;i++)
        {
            newArray[index]=big_int[i];
            index++;
        }

        delete[] big_int_;

        big_int_=newArray;
        int_length_=newLength;
    }

    int compareTo(const BiggerInt& obj)
    {
        if(int_length_<obj.int_length_)
        {
            return 1;
        }

        if(int_length_>obj.int_length_)
        {
            return 2;
        }

        for(int i=0;i<int_length_;i++)
        {
            if(big_int_[i]<obj.big_int_[i])
            {
                return 1;
            }

            if(big_int_[i]>obj.big_int_[i])
            {
                return 2;
            }
        }

        return 0;
    }

    int compareTo(const int* big_int,int size)
    {
        if(int_length_<size)
        {
            return 1;
        }

        if(int_length_>size)
        {
            return 2;
        }

        for(int i=0;i<int_length_;i++)
        {
            if(big_int_[i]<big_int[i])
            {
                return 1;
            }

            if(big_int_[i]>big_int[i])
            {
                return 2;
            }
        }

        return 0;
    }
};

int main()
{
    int array1[]={1,2,3,4};
    int array2[]={5,6,7};
    int array3[]={1,2,3,4};

    BiggerInt number1;
    BiggerInt number2(array1,4);
    BiggerInt number3(number2);

    cout<<"Number 1"<<endl;
    number1.display();

    cout<<"Number 2"<<endl;
    number2.display();

    cout<<"Number 3"<<endl;
    number3.display();

    cout<<endl;

    number1.assign(array2,3);

    cout<<"Number 1 after assign(array2)"<<endl;
    number1.display();

    cout<<endl;

    number1.assign(number2);

    cout<<"Number 1 after assign(number2)"<<endl;
    number1.display();

    cout<<endl;

    number2.append(array2,3);

    cout<<"Number 2 after append(array2)"<<endl;
    number2.display();

    cout<<endl;

    number3.append(number1);

    cout<<"Number 3 after append(number1)"<<endl;
    number3.display();

    cout<<endl;

    cout<<"Compare number1 with number3: ";
    cout<<number1.compareTo(number3)<<endl;

    cout<<"Compare number1 with array3: ";
    cout<<number1.compareTo(array3,4)<<endl;

    return 0;
}

