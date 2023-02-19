//4. Define a function to print Pascal Triangle up to N lines.

#include<iostream>
using namespace std;

void printPascalTriangle(int n) {
    int triangle[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            if(j==0 || i==j) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of lines to print: ";
    cin >> n;
    printPascalTriangle(n);
    return 0;
}
