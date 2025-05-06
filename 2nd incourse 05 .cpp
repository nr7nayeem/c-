#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    return original == reversed;
}

int main() {
    cout << "Palindrome numbers between 1 and 1000 are:\n";
    for (int i = 1; i <= 1000; i++) {
        if (isPalindrome(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
