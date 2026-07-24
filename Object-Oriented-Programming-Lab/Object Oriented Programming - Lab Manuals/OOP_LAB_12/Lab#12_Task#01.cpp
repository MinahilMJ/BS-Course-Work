#include<iostream>
using namespace std;


template<class T,int N>
class Sequence
{
private:

    T memblock[N];

public:

    void setmember(int x,T value)
    {
        if(x>=0&&x<N)
        {
            memblock[x]=value;
        }
    }


    T getmember(int x)
    {
        if(x>=0&&x<N)
        {
            return memblock[x];
        }

        return T();
    }
};


int main()
{
    Sequence<int,5> myints;

    Sequence<double,5> myfloats;


    myints.setmember(0,100);

    myfloats.setmember(3,3.1416);


    cout<<myints.getmember(0)<<endl;

    cout<<myfloats.getmember(3)<<endl;


    return 0;
}