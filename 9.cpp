/*9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.
*/
#include <iostream>
using namespace std;

// Function to find the maximum of two integers
int maximum(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

// Function to find the maximum of two real numbers
float maximum(float num1, float num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1 = 5;
    int num2 = 8;
    float num3 = 4.5;
    float num4 = 7.2;

    cout << "Maximum of " << num1 << " and " << num2 << " is " << maximum(num1, num2) << endl;
    cout << "Maximum of " << num3 << " and " << num4 << " is " << maximum(num3, num4) << endl;

    return 0;
}
