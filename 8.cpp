/*8. Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle*/

#include <iostream>
using namespace std;

// Function to calculate the area of a circle
float area(float radius) {
    return 3.14 * radius * radius;
}

// Function to calculate the area of a rectangle
float area(float length, float width) {
    return length * width;
}

// Function to calculate the area of a triangle
float area(float base, float height, char) {
    return 0.5 * base * height;
}

int main() {
    float radius = 2.0;
    float length = 4.0;
    float width = 3.0;
    float base = 5.0;
    float height = 6.0;

    cout << "Area of circle: " << area(radius) << endl;
    cout << "Area of rectangle: " << area(length, width) << endl;
    cout << "Area of triangle: " << area(base, height, 't') << endl;

    return 0;
}
