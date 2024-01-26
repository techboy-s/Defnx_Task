#include<bits/stdc++.h>
using namespace std;

string convertToBase(int number, int newBase) {
    if (number < 0 || newBase < 2) {
        // Handle invalid input
        return "Invalid input";
    }

    if (number == 0) {
        return "0"; // Special case: 0 in any base is always 0
    }

    string result = "";
    
    while (number > 0) {
        int remainder = number % newBase;
        char digit;

        // Convert remainder to the corresponding digit
        if (remainder < 10) {
            digit = '0' + remainder;
        } else {
            digit = 'A' + (remainder - 10); // For bases greater than 10, use letters A, B, ..., F
        }

        result = digit + result;
        number /= newBase;
    }

    return result;
}

int main() {
    // Example usage:
    int decimalNumber = 123;
    int newBase = 16;

    string result = convertToBase(decimalNumber, newBase);

    cout << decimalNumber << " in base " << newBase << " is: " << result << endl;

    return 0;
}
