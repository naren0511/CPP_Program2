
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    float area()
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    float area()
    {
        return length * breadth;
    }
};

class Triangle : public Shape
{
private:
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    float area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    float r, l, b, base, height;

    cout << "Enter Radius of Circle : ";
    cin >> r;

    cout << "Enter length of Rectangle : ";
    cin >> l;

    cout << "Enter Breadth of Rectangle : ";
    cin >> b;

    cout << "Enter Base of Triangle : ";
    cin >> base;

    cout << "Enter Height of Triangle : ";
    cin >> height;

    Circle c(r);
    Rectangle rec(l, b);
    Triangle t(base, height);

    Shape *ptr;

    ptr = &c;
    cout << "Area of Circle : " << ptr->area() << endl;

    ptr = &rec;
    cout << "Area of Rectangle : " << ptr->area() << endl;

    ptr = &t;
    cout << "Area of Triangle : " << ptr->area() << endl;

    return 0;
}
