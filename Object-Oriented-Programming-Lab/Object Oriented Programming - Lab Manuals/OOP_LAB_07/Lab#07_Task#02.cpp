#include<iostream>
using namespace std;

class Quadratic
{
private:

    int a;
    int b;
    int c;

public:

    Quadratic()
    {
        a=0;
        b=0;
        c=0;
    }

    Quadratic(int first,int second,int third)
    {
        a=first;
        b=second;
        c=third;
    }

    Quadratic(const Quadratic& obj)
    {
        a=obj.a;
        b=obj.b;
        c=obj.c;
    }

    ~Quadratic()
    {

    }

    Quadratic operator+(const Quadratic& obj)
    {
        Quadratic temp;

        temp.a=a+obj.a;
        temp.b=b+obj.b;
        temp.c=c+obj.c;

        return temp;
    }

    friend Quadratic operator+(Quadratic obj1,Quadratic obj2)
    {
        Quadratic temp;

        temp.a=obj1.a+obj2.a;
        temp.b=obj1.b+obj2.b;
        temp.c=obj1.c+obj2.c;

        return temp;
    }

    Quadratic operator-(const Quadratic& obj)
    {
        Quadratic temp;

        temp.a=a-obj.a;
        temp.b=b-obj.b;
        temp.c=c-obj.c;

        return temp;
    }

    friend Quadratic operator-(Quadratic obj1,Quadratic obj2)
    {
        Quadratic temp;

        temp.a=obj1.a-obj2.a;
        temp.b=obj1.b-obj2.b;
        temp.c=obj1.c-obj2.c;

        return temp;
    }

    Quadratic operator*(int value)
    {
        Quadratic temp;

        temp.a=a*value;
        temp.b=b*value;
        temp.c=c*value;

        return temp;
    }

    bool operator==(const Quadratic& obj)
    {
        if(a==obj.a&&b==obj.b&&c==obj.c)
        {
            return true;
        }

        return false;
    }

    bool operator!=(const Quadratic& obj)
    {
        if(a!=obj.a||b!=obj.b||c!=obj.c)
        {
            return true;
        }

        return false;
    }

    Quadratic& operator=(const Quadratic& obj)
    {
        if(this!=&obj)
        {
            a=obj.a;
            b=obj.b;
            c=obj.c;
        }

        return *this;
    }

    friend ostream& operator<<(ostream& output,const Quadratic& obj)
    {
        output<<obj.a<<"x^2 + "<<obj.b<<"x + "<<obj.c;

        return output;
    }

    friend istream& operator>>(istream& input,Quadratic& obj)
    {
        cout<<"Enter value of a: ";
        input>>obj.a;

        cout<<"Enter value of b: ";
        input>>obj.b;

        cout<<"Enter value of c: ";
        input>>obj.c;

        return input;
    }
};


int main()
{
    Quadratic equation1(2,3,4);
    Quadratic equation2(1,2,3);

    Quadratic result;

    cout<<"Equation 1: "<<equation1<<endl;
    cout<<"Equation 2: "<<equation2<<endl;

    result=equation1+equation2;

    cout<<"Addition: "<<result<<endl;

    result=equation1-equation2;

    cout<<"Subtraction: "<<result<<endl;

    result=equation1*3;

    cout<<"Multiplication with constant: "<<result<<endl;

    cout<<"Equality: ";

    if(equation1==equation2)
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"Not Equal"<<endl;
    }

    cout<<"Inequality: ";

    if(equation1!=equation2)
    {
        cout<<"Not Equal"<<endl;
    }
    else
    {
        cout<<"Equal"<<endl;
    }

    Quadratic equation3;

    cin>>equation3;

    cout<<"Entered Equation: "<<equation3<<endl;

    return 0;
}