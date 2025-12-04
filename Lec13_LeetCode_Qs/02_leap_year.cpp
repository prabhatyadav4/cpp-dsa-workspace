/*
Leap Year Problem

You are given an integer n. Return true if it is a leap year, otherwise return false.

A year is a leap year if:
1. It is divisible by 400, OR
2. It is divisible by 4 but NOT divisible by 100

Example 1:
Input: n = 4
Output: true
Explanation:
4 is divisible by 4 and not divisible by 100 → Leap year

Example 2:
Input: n = 2021
Output: false
Explanation:
2021 is not divisible by 4 → Not a leap year

Constraints:
1 <= n < 10^4
*/

#include <iostream>
using namespace std;

// Function to check if a year is a leap year
bool checkYear(int n) {
    // If divisible by 400, it's a leap year
    if (n % 400 == 0) {
        return true;
    }
    // If divisible by 4 but not by 100, it's a leap year
    else if (n % 4 == 0 && n % 100 != 0) {
        return true;
    }
    // Otherwise, not a leap year
    else {
        return false;
    }
}

// Main function for local testing
int main() {
    int n;
    cin >> n;
    cout << (checkYear(n) ? "true" : "false");
    return 0;
}