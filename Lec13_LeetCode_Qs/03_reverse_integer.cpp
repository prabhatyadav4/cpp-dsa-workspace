/*
Reverse Integer Problem

You are given a signed 32-bit integer x.
Return x with its digits reversed.

If reversing x causes the value to go outside the signed
32-bit integer range [-2^31, 2^31 - 1], return 0.

You cannot use 64-bit integers.

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21

Constraints:
-2^31 <= x <= 2^31 - 1
*/

#include <iostream>
#include <climits>
using namespace std;

// Function to reverse a 32-bit signed integer
int reverseInteger(int x) {

    int reversed_x = 0;  // Stores the reversed number

    while (x != 0) {

        int lastDigit = x % 10;  // Extract the last digit
        x /= 10;                 // Remove last digit

        // Check for overflow BEFORE multiplying by 10
        // If reversed_x is already beyond safe range → overflow will happen
        if (reversed_x > INT_MAX / 10 ||
            (reversed_x == INT_MAX / 10 && lastDigit > 7)) {
            return 0;
        }

        if (reversed_x < INT_MIN / 10 ||
            (reversed_x == INT_MIN / 10 && lastDigit < -8)) {
            return 0;
        }

        // Safe to update
        reversed_x = reversed_x * 10 + lastDigit;
    }

    return reversed_x;
}

// Main function for local testing
int main() {
    int x;
    cin >> x;
    cout << reverseInteger(x);
    return 0;
}