/*10. Write functions using function overloading to add two numbers having different data
types.*/

#include <iostream>
using namespace std;

// function to add two integers
int add(int a, int b) {
    return a + b;
}

// function to add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

// main function to test the above functions
int main() {
    int num1 = 5, num2 = 10;
    float num3 = 3.5, num4 = 2.5;

    // calling the integer addition function
    cout << "Addition of " << num1 << " and " << num2 << " is: " << add(num1, num2) << endl;

    // calling the float addition function
    cout << "Addition of " << num3 << " and " << num4 << " is: " << add(num3, num4) << endl;

    return 0;
}
