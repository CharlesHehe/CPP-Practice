#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() const = 0;
};

class Rectangle : public Shape
{
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override
    {
        return width * height;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r){};

    double area() const override
    {
        return 3.1415926535897 * radius * radius;
    }
};

int main()
{
    Rectangle rect(4.0, 5.0);
    Rectangle* rect = new Rectangle(4.0, 5.0);
}