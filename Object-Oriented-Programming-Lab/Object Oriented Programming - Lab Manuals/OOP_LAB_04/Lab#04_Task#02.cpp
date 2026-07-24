#include<iostream>
using namespace std;

class Phone
{
private:
    int areaCode;
    int exchange;
    int number;

public:

    void SetNumber(int area,int exchangeNumber,int phoneNumber)
    {
        areaCode=area;
        exchange=exchangeNumber;
        number=phoneNumber;
    }

    void Input()
    {
        cout<<"Enter your area code, exchange, and number: ";
        cin>>areaCode>>exchange>>number;
    }

    void Display()
    {
        cout<<"("<<areaCode<<") "<<exchange<<"-"<<number<<endl;
    }
};

int main()
{
    Phone myNumber;
    Phone userNumber;

    myNumber.SetNumber(212,767,8900);

    userNumber.Input();

    cout<<"My number is ";
    myNumber.Display();

    cout<<"Your number is ";
    userNumber.Display();

    return 0;
}