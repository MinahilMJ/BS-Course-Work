#include<iostream>
using namespace std;

class Point
{
private:
    int* x;
    int* y;

public:

    Point()
    {
        x=new int(0);
        y=new int(0);
    }

    Point(int xValue,int yValue)
    {
        x=new int(xValue);
        y=new int(yValue);
    }

    int GetX()
    {
        return *x;
    }

    int GetY()
    {
        return *y;
    }

    ~Point()
    {
        delete x;
        delete y;
    }
};

class Circle
{
private:
    float* radius;
    Point* coordinate;

public:

    Circle()
    {
        radius=new float(0);
        coordinate=new Point();
    }

    Circle(float radiusValue,int xValue,int yValue)
    {
        radius=new float(radiusValue);
        coordinate=new Point(xValue,yValue);
    }

    float GetRadius()
    {
        return *radius;
    }

    Point* GetPoint()
    {
        return coordinate;
    }

    bool CheckOnCircle(Point& p1)
    {
        int xDifference=p1.GetX()-coordinate->GetX();
        int yDifference=p1.GetY()-coordinate->GetY();

        float distance=xDifference*xDifference+yDifference*yDifference;

        if(distance<=(*radius)*(*radius))
        {
            return true;
        }

        return false;
    }

    ~Circle()
    {
        delete radius;
        delete coordinate;
    }
};

class Cylinder
{
private:
    int height;
    Circle* top;
    Circle* bottom;

public:

    Cylinder(int heightValue,float topRadius,int topX,int topY,float bottomRadius,int bottomX,int bottomY)
    {
        height=heightValue;

        top=new Circle(topRadius,topX,topY);
        bottom=new Circle(bottomRadius,bottomX,bottomY);
    }

    bool CheckOnCylinder(Point& p1)
    {
        if(top->CheckOnCircle(p1)&&bottom->CheckOnCircle(p1))
        {
            return true;
        }

        return false;
    }

    ~Cylinder()
    {
        delete top;
        delete bottom;
    }
};

int main()
{
    Point p1(2,4);

    Circle c1(5.3,2,3);

    if(c1.CheckOnCircle(p1))
    {
        cout<<"Point lies inside the circle."<<endl;
    }
    else
    {
        cout<<"Point does not lie inside the circle."<<endl;
    }

    Cylinder cl1(7,5.3,2,9,5.3,2,3);

    if(cl1.CheckOnCylinder(p1))
    {
        cout<<"Point lies inside the cylinder."<<endl;
    }
    else
    {
        cout<<"Point does not lie inside the cylinder."<<endl;
    }

    return 0;
}