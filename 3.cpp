//3. Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;

double power(double x, int y) {
    if(y == 0) {
        return 1;
    }
    double temp = power(x, y/2);
    if(y%2 == 0) {
        return temp*temp;
    } else {
        if(y > 0) {
            return x*temp*temp;
        } else {
            return (temp*temp)/x;
        }
    }
}

int main() {
    double x;
    int y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    double result = power(x, y);
    cout << x << " raised to the power " << y << " is " << result << "." << endl;
    return 0;
}
