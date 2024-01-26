#include <bits/stdc++.h>
using namespace std;

int ExtractSumDigit(const string& inputString);

int main() {
    // Test case 1: Valid input with digits
    string inputStr1 = "ABC1YU5HG8BH";
    int result1 = ExtractSumDigit(inputStr1);
    assert(result1 == 9);
    cout << "Test case 1 passed!" << endl;

    // Test case 2: Valid input with no digits
    string inputStr2 = "NoDigitsHere";
    int result2 = ExtractSumDigit(inputStr2);
    assert(result2 == -1); // -1 represents no digits
    cout << "Test case 2 passed!" << endl;

    // Test case 3: Empty input
    string inputStr3 = "";
    int result3 = ExtractSumDigit(inputStr3);
    assert(result3 == -1); // -1 represents no digits
    cout << "Test case 3 passed!" << endl;

    return 0;
}
