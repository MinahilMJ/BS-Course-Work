#include<iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:

    Date()
    {
        cout<<"Default Constructor Called"<<endl;

        day=1;
        month=1;
        year=1926;
    }

    void Print()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }

    void Input()
    {
        cout<<"Enter day: ";
        cin>>day;

        cout<<"Enter month: ";
        cin>>month;

        cout<<"Enter year: ";
        cin>>year;
    }

    void SetDay(int value)
    {
        day=value;
    }

    void SetMonth(int value)
    {
        month=value;
    }

    void SetYear(int value)
    {
        year=value;
    }

    int GetDay()
    {
        return day;
    }

    int GetMonth()
    {
        return month;
    }

    int GetYear()
    {
        return year;
    }
};

int main()
{
    Date date1;

    cout<<"Date 1: ";
    date1.Print();

    cout<<endl;

    date1.Input();

    cout<<"Updated Date: ";
    date1.Print();

    cout<<endl;

    Date xmasDay;

    xmasDay.SetDay(25);
    xmasDay.SetMonth(12);
    xmasDay.SetYear(2020);

    cout<<"Christmas Date using Setters: ";
    xmasDay.Print();

    cout<<endl;

    cout<<"Christmas Date using Getters: ";
    cout<<xmasDay.GetDay()<<"/"<<xmasDay.GetMonth()<<"/"<<xmasDay.GetYear()<<endl;

    return 0;
}