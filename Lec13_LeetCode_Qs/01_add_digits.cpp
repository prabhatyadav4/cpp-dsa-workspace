/*
258. Add Digits

Given an integer num, repeatedly add all its digits until the result 
has only one digit, and return it.

Example 1:
Input: num = 38
Output: 2
Explanation:
38 --> 3 + 8 = 11
11 --> 1 + 1 = 2

Example 2:
Input: num = 0
Output: 0

Constraints:
0 <= num <= 2^31 - 1
*/

#include <iostream>
using namespace std;

// Function to repeatedly add digits until one digit remains
int addDigits(int num) {
    while (num > 9) {        // Continue until it's a single digit
        int sum = 0;
        while (num != 0) {   // Add all digits
            sum += num % 10;
            num /= 10;
        }
        num = sum;           // Replace number with digit-sum
    }
    return num;
}

// Main function for local testing
int main() {
    int num;
    cin >> num;
    cout << addDigits(num);
    return 0;
}