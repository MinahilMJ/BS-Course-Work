#include<iostream>
using namespace std;

class Sample
{
private:
    int x;
    double y;

public:

    Sample()
    {
        x=0;
        y=0;
    }

    Sample(int value)
    {
        x=value;
        y=0;
    }

    Sample(int value1,int value2)
    {
        x=value1;
        y=value2;
    }

    Sample(int value1,double value2)
    {
        x=value1;
        y=value2;
    }

    void Display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};

int main()
{
    Sample object1;
    Sample object2(5);
    Sample object3(10,20);
    Sample object4(15,5.5);

    cout<<"Constructor 1"<<endl;
    object1.Display();

    cout<<endl;

    cout<<"Constructor 2"<<endl;
    object2.Display();

    cout<<endl;

    cout<<"Constructor 3"<<endl;
    object3.Display();

    cout<<endl;

    cout<<"Constructor 4"<<endl;
    object4.Display();

    return 0;
}