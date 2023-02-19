/*5. Define a function to check whether a given number is a term in a Fibonacci series or
not
*/
#include <iostream>

bool isFibonacci(int num) {
    int a = 0, b = 1;
    while (b < num) {
        int temp = b;
        b += a;
        a = temp;
    }
    return b == num;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isFibonacci(num)) {
        std::cout << num << " is a term in the Fibonacci series.\n";
    } else {
        std::cout << num << " is not a term in the Fibonacci series.\n";
    }
    return 0;
}
