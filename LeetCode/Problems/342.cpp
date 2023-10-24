class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
            return false; // Handle non-positive numbers, as powers of 4 are positive integers.
        }

        // Check if n is a power of 2
        if ((n & (n - 1)) != 0) {
            return false;
        }

        // Check if the only set bit in n is at an even position
        if ((n & 0x55555555) == n) {
            return true;
        } else {
            return false;
        }
    }
};
