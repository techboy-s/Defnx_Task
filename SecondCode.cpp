#include<bits/stdc++.h> 
using namespace std; 

// Function for finding sum of larger numbers 
string TotalSum(string str1, string str2) 
{ 
	// Remove leading zeros from both strings
	str1.erase(0, min(str1.find_first_not_of('0'), str1.size()-1));
	str2.erase(0, min(str2.find_first_not_of('0'), str2.size()-1));

	// If both strings become empty, return "0"
	if (str1.empty() && str2.empty()) 
		return "0";

	// Before proceeding further, make sure length 
	// of str2 is larger. 
	if (str1.length() > str2.length()) 
		swap(str1, str2); 

	// Take an empty string for storing result 
	string str = ""; 

	// Calculate length of both string 
	int n1 = str1.length(), n2 = str2.length(); 
	int diff = n2 - n1; 

	// Initially take carry zero 
	int carry = 0; 

	// Traverse from end of both strings 
	for (int i=n1-1; i>=0; i--) 
	{ 
		// Do school mathematics, compute sum of 
		// current digits and carry 
		int sum = ((str1[i]-'0') + 
				(str2[i+diff]-'0') + 
				carry); 
		str.push_back(sum%10 + '0'); 
		carry = sum/10; 
	} 

	// Add remaining digits of str2[] 
	for (int i=n2-n1-1; i>=0; i--) 
	{ 
		int sum = ((str2[i]-'0')+carry); 
		str.push_back(sum%10 + '0'); 
		carry = sum/10; 
	} 

	// Add remaining carry 
	if (carry) 
		str.push_back(carry+'0'); 

	// reverse resultant string 
	reverse(str.begin(), str.end()); 

	return str; 
} 

 
int main() 
{ 
	string str1 = "1234567890123456789012345678901234567890"; 
	string str2 = "1234567890123456789012345678901234567890"; 
	cout << TotalSum(str1, str2); // Output: 0
	return 0; 
}
