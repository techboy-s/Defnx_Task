#include <iostream>
#include <vector>
#include <cassert>

std::vector<std::string> filterStrings(const std::vector<std::string>& inputList, const std::string& matchString);

void testFilterStrings() {
    // Test case 1: Basic example
    std::vector<std::string> inputList1 = {"this", "place", "is", "an", "island"};
    std::string matchString1 = "is";
    std::vector<std::string> result1 = filterStrings(inputList1, matchString1);
    assert(result1 == std::vector<std::string>{"place", "an"});

    // Test case 2: No matches
    std::vector<std::string> inputList2 = {"apple", "banana", "orange"};
    std::string matchString2 = "xyz";
    std::vector<std::string> result2 = filterStrings(inputList2, matchString2);
    assert(result2 == inputList2);

    // Test case 3: Empty input list
    std::vector<std::string> inputList3;
    std::string matchString3 = "abc";
    std::vector<std::string> result3 = filterStrings(inputList3, matchString3);
    assert(result3.empty());

    // Test case 4: Empty match string
    std::vector<std::string> inputList4 = {"hello", "world"};
    std::string matchString4 = "";
    std::vector<std::string> result4 = filterStrings(inputList4, matchString4);
    assert(result4 == inputList4);

    // Test case 5: All strings have matching characters
    std::vector<std::string> inputList5 = {"dog", "cat", "bat"};
    std::string matchString5 = "abc";
    std::vector<std::string> result5 = filterStrings(inputList5, matchString5);
    assert(result5.empty());
}

int main() {
    testFilterStrings();
    std::cout << "All test cases passed!" << std::endl;

    return 0;
}
