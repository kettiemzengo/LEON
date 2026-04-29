#include <iostream>
using namespace std;

namespace shapes {

class Square {
private:
    float side;

public:
    Square() { side = 0.0; }
    Square(float s) { side = s; }
    ~Square() {}

    void setSide(float s) { side = s; }
    float getSide() const { return side; }
};

class Triangle {
private:
    float base;
    float height;

public:
    Triangle() { base = 0.0; height = 0.0; }
    Triangle(float b, float h) { base = b; height = h; }
    ~Triangle() {}

    void setBase(float b) { base = b; }
    void setHeight(float h) { height = h; }

    float getBase() const { return base; }
    float getHeight() const { return height; }
};

class Circle {
private:
    float radius;

public:
    Circle() { radius = 0.0; }
    Circle(float r) { radius = r; }
    ~Circle() {}

    void setRadius(float r) { radius = r; }
    float getRadius() const { return radius; }
};

}

class Area {
public:
    static float calculateSquareArea(shapes::Square s) {
        return s.getSide() * s.getSide();
    }

    static float calculateTriangleArea(shapes::Triangle t) {
        return 0.5 * t.getBase() * t.getHeight();
    }

    static float calculateCircleArea(shapes::Circle c) {
        return 3.14159 * c.getRadius() * c.getRadius();
    }
};

using namespace shapes;

int main() {
    int choice;

    do {
        cout << "\n1. Square\n2. Triangle\n3. Circle\n4. Quit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            float side;
            cout << "Enter side: ";
            cin >> side;

            Square s;
            s.setSide(side);

            cout << "Area: " << Area::calculateSquareArea(s) << endl;
        }
        else if (choice == 2) {
            float base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;

            Triangle t;
            t.setBase(base);
            t.setHeight(height);

            cout << "Area: " << Area::calculateTriangleArea(t) << endl;
        }
        else if (choice == 3) {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;

            Circle c;
            c.setRadius(radius);

            cout << "Area: " << Area::calculateCircleArea(c) << endl;
        }

    } while (choice != 4);

    return 0;
}