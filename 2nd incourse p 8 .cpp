#include <iostream>
using namespace std;

// Void function to calculate and print grade
void calculateGrade(int marks) {
    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 80) {
        cout << "Grade: A" << endl;
    } else if (marks >= 70) {
        cout << "Grade: B" << endl;
    } else if (marks >= 60) {
        cout << "Grade: C" << endl;
    } else if (marks >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }
}

int main() {
    int marks;

    cout << "Enter your marks (0-100): ";
    cin >> marks;

    // Call the void function
    calculateGrade(marks);

    return 0;
}

