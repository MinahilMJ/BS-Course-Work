#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    float eng;
    float math;
    float science;
    float total;

public:

    void Take_data()
    {
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter English marks: ";
        cin>>eng;

        cout<<"Enter Math marks: ";
        cin>>math;

        cout<<"Enter Science marks: ";
        cin>>science;

        total=ctotal();
    }

    float ctotal()
    {
        return eng+math+science;
    }

    void Show_data()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"English Marks: "<<eng<<endl;
        cout<<"Math Marks: "<<math<<endl;
        cout<<"Science Marks: "<<science<<endl;
        cout<<"Total: "<<total<<endl;
    }
};

int main()
{
    Student student;

    student.Take_data();

    cout<<endl;

    student.Show_data();

    return 0;
}