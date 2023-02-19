//6. Define a function to swap data of two int variables using call by reference

#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << '\n';
    swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << '\n';
    return 0;
}
