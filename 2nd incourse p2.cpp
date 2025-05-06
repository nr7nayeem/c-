#include <iostream>
using namespace std;

int main() {
    int rows = 10; // You can change this for more rows

    for (int i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }

        // Print stars with space
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}


