#include<iostream>
using namespace std;

class LocalPhone
{
protected:
    string phone;

public:

    void InputPhone()
    {
        cout<<"Enter phone number: ";
        cin>>phone;
    }

    void DisplayPhone()
    {
        cout<<"Phone Number: "<<phone<<endl;
    }
};

class NatPhone:public LocalPhone
{
protected:
    string cityCode;

public:

    void InputCityCode()
    {
        cout<<"Enter city code: ";
        cin>>cityCode;
    }

    void DisplayCityCode()
    {
        cout<<"City Code: "<<cityCode<<endl;
    }
};

class IntPhone:public NatPhone
{
private:
    string countryCode;

public:

    void InputCountryCode()
    {
        cout<<"Enter country code: ";
        cin>>countryCode;
    }

    void DisplayCountryCode()
    {
        cout<<"Country Code: "<<countryCode<<endl;
    }

    void Display()
    {
        DisplayCountryCode();
        DisplayCityCode();
        DisplayPhone();
    }
};

int main()
{
    IntPhone phone;

    phone.InputCountryCode();
    phone.InputCityCode();
    phone.InputPhone();

    cout<<endl;

    phone.Display();

    return 0;
}