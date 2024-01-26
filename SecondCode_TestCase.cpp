#include<bits/stdc++.h>
using namespace std;

// Given function for finding the sum of two large numbers in string format
string TotalSum(string str1, string str2);

// Test cases
void testAddLargeNumbers() {
    // Test case 1: Both numbers are positive
    assert(TotalSum("123", "456") == "579");

    // Test case 2: One number is zero
    assert(TotalSum("123", "0") == "123");

    // Test case 3: Both numbers are zero
    assert(TotalSum("0", "0") == "0");

    // Test case 4: Large positive numbers
    assert(TotalSum("1234567890123456789012345678901234567890", "9876543210987654321098765432109876543210")
           == "11111111111111111110111111111101111011100");

    // Test case 5: Large positive numbers with leading zeros
    assert(TotalSum("00123", "0456") == "579");

    // Test case 6: Large positive numbers with different lengths
    assert(TotalSum("123", "9876543210987654321098765432109876543210")
           == "9876543210987654321098765432109876543333");

    // Test case 7: Large positive numbers with equal lengths and carry
    assert(TotalSum("9999999999999999999999999999999999999999", "1")
           == "10000000000000000000000000000000000000000");

    // Test case 8: Large positive numbers with leading zeros and carry
    assert(TotalSum("0000000000000000000000000000000009999999999999999999999999999999999999999", "1")
           == "10000000000000000000000000000000000000000");

    // Test case 9: Large negative numbers (as the code currently handles only positive numbers)
    // This test case is not applicable to the provided function, which works with positive numbers only.
}

int main() {
    testAddLargeNumbers();
    cout << "All test cases passed!" << endl;

    return 0;
}
