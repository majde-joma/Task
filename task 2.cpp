#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double area() {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);

    c.display();
    cout << "Circle Area = " << c.area() << endl;

    r.display();
    cout << "Rectangle Perimeter = " << r.perimeter() << endl;

    return 0;
}
