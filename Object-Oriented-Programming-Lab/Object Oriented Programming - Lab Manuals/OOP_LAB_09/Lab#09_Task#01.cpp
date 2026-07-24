#include<iostream>
#include<cstring>
using namespace std;

class Tyre
{
private:
    int* width;
    int* aspect_ratio;
    int* diameter;

public:

    Tyre()
    {
        width=new int(0);
        aspect_ratio=new int(0);
        diameter=new int(0);
    }

    Tyre(int w,int a,int d)
    {
        width=new int(w);
        aspect_ratio=new int(a);
        diameter=new int(d);
    }

    int GetWidth()
    {
        return *width;
    }

    int GetAspectRatio()
    {
        return *aspect_ratio;
    }

    int GetDiameter()
    {
        return *diameter;
    }

    void PrintTyre()
    {
        cout<<"Width: "<<*width<<endl;
        cout<<"Aspect Ratio: "<<*aspect_ratio<<endl;
        cout<<"Diameter: "<<*diameter<<endl;
    }

    ~Tyre()
    {
        delete width;
        delete aspect_ratio;
        delete diameter;
    }
};

class Car
{
private:
    int* model;
    char* company;
    Tyre* t1;

public:

    Car(int m,const char* c,Tyre& tyre)
    {
        model=new int(m);

        company=new char[strlen(c)+1];
        strcpy(company,c);

        t1=&tyre;
    }

    void PrintCar()
    {
        cout<<"Model: "<<*model<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"Tyre Information"<<endl;
        t1->PrintTyre();
    }

    ~Car()
    {
        delete model;
        delete[] company;
    }
};

int main()
{
    Tyre tNew(12,10,13);

    Car cNew(2016,"Honda",tNew);

    cNew.PrintCar();

    return 0;
}