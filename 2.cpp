//2. Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

int highestDigit(int num) {
    int highest = 0;
    while(num > 0) {
        int digit = num%10;
        if(digit > highest) {
            highest = digit;
        }
        num /= 10;
    }
    return highest;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int highest = highestDigit(n);
    cout << "The highest value digit in " << n << " is " << highest << "." << endl;
    return 0;
}
