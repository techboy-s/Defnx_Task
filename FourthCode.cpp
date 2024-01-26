#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> filterStrings(const std::vector<std::string>& inputList, const std::string& matchString) {
    std::vector<std::string> resultList;

    for (const std::string& word : inputList) {
        if (std::all_of(word.begin(), word.end(), [matchString](char c) {
            return matchString.find(c) == std::string::npos;
        })) {
            resultList.push_back(word);
        }
    }

    return resultList;
}

int main() {
    // Example usage:
    std::vector<std::string> argument1 = {"this", "place", "is", "an", "island"};
    std::string argument2 = "is";

    std::vector<std::string> result = filterStrings(argument1, argument2);

    // Displaying the result
    for (const std::string& word : result) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
