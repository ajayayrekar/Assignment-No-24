//1. Define a function to check whether a given number is a Prime number or not.


#include<iostream>
using namespace std;

bool isPrime(int num) {
    if(num < 2) {
        return false;
    }
    for(int i=2; i*i<=num; i++) {
        if(num%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}
