class Solution {
public:
    vector<int> countBits(int n) {
        std::vector<int> result;
        for (int i = 0; i < n+1; i++) {  //do this 0-4 if given 4
            std::bitset<10> binary10(i);
            int count = 0;
            while (binary10 != 0) {
                if (binary10[0] & 1) {
                    count++;
                }
                binary10 >>= 1; //shift in zero by one unsigned
            }
            result.push_back(count);
        }

        return result;
    }
};
