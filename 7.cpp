//7. Write a function using the default argument that is able to add 2 or 3 numbers.

#include <iostream>

int add(int a, int b, int c = 0) {
    return a + b + c;
}

int main() {
    std::cout << "2 + 3 = " << add(2, 3) << '\n';
    std::cout << "2 + 3 + 4 = " << add(2, 3, 4) << '\n';
    return 0;
}
