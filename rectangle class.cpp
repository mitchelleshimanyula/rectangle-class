#include <iostream>
using namespace std;
class Rectangle {
private:
    double rectangleWidth;
    double rectangleHeight;

public:
    Rectangle() : rectangleWidth(0), rectangleHeight(0) {}

    Rectangle(double w, double h) : rectangleWidth(w), rectangleHeight(h) {}

    double getArea() {
        return rectangleWidth * rectangleHeight;
    }

    void printDetails() {
        cout << "Width: " << rectangleWidth << endl;
        cout << "Height: " << rectangleHeight << endl;
        cout << "Area: " << getArea() << endl; 
    }
};

int main() {
    double width, height;
    cout << "Enter the width: ";
    cin >> width;
    cout << "Enter the height: ";
    cin >> height;

    Rectangle rect(width, height);
    rect.printDetails();

    return 0;
}