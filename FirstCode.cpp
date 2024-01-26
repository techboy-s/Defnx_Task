#include <bits/stdc++.h>
using namespace std;

int ExtractSumDigit(const string& inputString) {
    string digits;

    for (char ch : inputString) {
        if (isdigit(ch)) {
            digits.push_back(ch);
        }
    }

    if (digits.empty()) {
        return -1; // Return a sentinel value to represent no digits
    }

    int firstDigit = digits[0] - '0';
    int lastDigit = digits.back() - '0';

    return firstDigit + lastDigit;
}

int main() {
    string inputStr = "ABC2YU4HG7BH";
    int result = ExtractSumDigit(inputStr);

    if (result != -1) {
        cout << "Result: " << result << endl;
    } else {
        cout << "No digits found in the input string." << endl;
    }

    return 0;
}
