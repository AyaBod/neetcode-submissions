class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        // >>= shift bits right (shifting in zeroes)
        // & bitwise and

        while (n != 0) {
            if (1 & n) { //comparing n and 1, both as 32 bits, 00001 and 11011, is true because both have 1 at the lsb
                count++;
            }
            n >>= 1; //shift right by 1
        }

        return count;
    }
};
