#include<iostream>
using namespace std;

class EMPLOYEE
{
protected:
    string name;
    unsigned long number;

public:

    void InputEmployee()
    {
        cout<<"Enter Employee Name: ";
        cin>>name;

        cout<<"Enter Employee Number: ";
        cin>>number;
    }

    void DisplayEmployee()
    {
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Number: "<<number<<endl;
    }
};

class Employee2:public EMPLOYEE
{
protected:
    double compensation;
    string time;

public:

    void Input()
    {
        InputEmployee();

        cout<<"Enter Compensation: ";
        cin>>compensation;

        cout<<"Enter Time (Hourly/Weekly/Monthly): ";
        cin>>time;
    }

    void Display()
    {
        DisplayEmployee();

        cout<<"Compensation: "<<compensation<<endl;
        cout<<"Time: "<<time<<endl;
    }
};

class Manager:public Employee2
{
public:

    void ShowManager()
    {
        cout<<"\nManager Information"<<endl;
        Display();
    }
};

class Scientist:public Employee2
{
public:

    void ShowScientist()
    {
        cout<<"\nScientist Information"<<endl;
        Display();
    }
};

class Laborer:public Employee2
{
public:

    void ShowLaborer()
    {
        cout<<"\nLaborer Information"<<endl;
        Display();
    }
};

int main()
{
    Manager manager;
    Scientist scientist;
    Laborer laborer;

    cout<<"Enter Manager Details"<<endl;
    manager.Input();

    cout<<endl;

    cout<<"Enter Scientist Details"<<endl;
    scientist.Input();

    cout<<endl;

    cout<<"Enter Laborer Details"<<endl;
    laborer.Input();

    cout<<"\n-------------------------"<<endl;

    manager.ShowManager();

    scientist.ShowScientist();

    laborer.ShowLaborer();

    return 0;
}