#include<iostream>
#include<string>
using namespace std;


class invalidDay
{

};


class invalidMonth
{

};


class invalidYear
{

};



bool leapYear(int year)
{
    if(year%400==0 || (year%4==0 && year%100!=0))
    {
        return true;
    }

    return false;
}



int main()
{
    int day;
    int month;
    int year;


    try
    {
        cout<<"Enter date of birth (month-day-year): ";

        cin>>month>>day>>year;


        if(month<1 || month>12)
        {
            throw invalidMonth();
        }


        int daysInMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};


        if(month==2 && leapYear(year))
        {
            daysInMonth[1]=29;
        }


        if(day<1 || day>daysInMonth[month-1])
        {
            throw invalidDay();
        }


        if(year<1)
        {
            throw invalidYear();
        }


        string months[12]=
        {
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December"
        };


        cout<<months[month-1]<<" "<<day<<", "<<year<<endl;

    }


    catch(invalidDay)
    {
        cout<<"Invalid Day"<<endl;
    }


    catch(invalidMonth)
    {
        cout<<"Invalid Month"<<endl;
    }


    catch(invalidYear)
    {
        cout<<"Invalid Year"<<endl;
    }


    return 0;
}