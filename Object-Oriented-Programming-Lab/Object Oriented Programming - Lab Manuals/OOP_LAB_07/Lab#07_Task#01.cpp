#include<iostream>
using namespace std;

class ComplexNumber
{
private:

public:

    int real;
    int imaginary;

    static int count;
    static int countDisplay;

    ComplexNumber(int r=0,int i=0)
    {
        real=r;
        imaginary=i;

        count++;
        countDisplay++;
    }

    ~ComplexNumber()
    {

    }

    void Input()
    {
        cout<<"Enter real part: ";
        cin>>real;

        cout<<"Enter imaginary part: ";
        cin>>imaginary;
    }

    void Output()
    {
        if(imaginary>=0)
        {
            cout<<real<<" + "<<imaginary<<"i"<<endl;
        }
        else
        {
            cout<<real<<" - "<<-imaginary<<"i"<<endl;
        }
    }

    bool IsEqual(ComplexNumber num)
    {
        if(real==num.real&&imaginary==num.imaginary)
        {
            return true;
        }

        return false;
    }

    ComplexNumber Conjugate()
    {
        ComplexNumber temp(real,-imaginary);

        return temp;
    }

    ComplexNumber operator+(const ComplexNumber& num)
    {
        ComplexNumber temp;

        temp.real=real+num.real;
        temp.imaginary=imaginary+num.imaginary;

        return temp;
    }

    ComplexNumber operator-(const ComplexNumber& num)
    {
        ComplexNumber temp;

        temp.real=real-num.real;
        temp.imaginary=imaginary-num.imaginary;

        return temp;
    }

    ComplexNumber operator*(const ComplexNumber& num)
    {
        ComplexNumber temp;

        temp.real=(real*num.real)-(imaginary*num.imaginary);
        temp.imaginary=(real*num.imaginary)+(imaginary*num.real);

        return temp;
    }

    ComplexNumber& operator++()
    {
        real++;

        return *this;
    }

    ComplexNumber& operator--()
    {
        real--;

        return *this;
    }

    ComplexNumber operator++(int)
    {
        ComplexNumber temp=*this;

        real++;

        return temp;
    }

    ComplexNumber operator--(int)
    {
        ComplexNumber temp=*this;

        real--;

        return temp;
    }

    bool operator>=(const ComplexNumber& num)
    {
        if(real>=num.real&&imaginary>=num.imaginary)
        {
            return true;
        }

        return false;
    }

    bool operator<=(const ComplexNumber& num)
    {
        if(real<=num.real&&imaginary<=num.imaginary)
        {
            return true;
        }

        return false;
    }

    bool operator!=(const ComplexNumber& num)
    {
        if(real!=num.real||imaginary!=num.imaginary)
        {
            return true;
        }

        return false;
    }
};

int ComplexNumber::count=0;
int ComplexNumber::countDisplay=0;


int main()
{
    ComplexNumber number1(5,3);
    ComplexNumber number2(2,4);

    cout<<"Number 1: ";
    number1.Output();

    cout<<"Number 2: ";
    number2.Output();

    ComplexNumber result;

    result=number1+number2;

    cout<<"Addition: ";
    result.Output();

    result=number1-number2;

    cout<<"Subtraction: ";
    result.Output();

    result=number1*number2;

    cout<<"Multiplication: ";
    result.Output();

    cout<<"Conjugate of Number 1: ";
    result=number1.Conjugate();
    result.Output();

    cout<<"Equality: ";
    cout<<number1.IsEqual(number2)<<endl;

    ++number1;

    cout<<"After Pre Increment: ";
    number1.Output();

    number2--;

    cout<<"After Post Decrement: ";
    number2.Output();

    cout<<"Number1 >= Number2: ";
    cout<<(number1>=number2)<<endl;

    cout<<"Number1 <= Number2: ";
    cout<<(number1<=number2)<<endl;

    cout<<"Number1 != Number2: ";
    cout<<(number1!=number2)<<endl;

    cout<<"Total Objects Created: "<<ComplexNumber::countDisplay<<endl;

    return 0;
}