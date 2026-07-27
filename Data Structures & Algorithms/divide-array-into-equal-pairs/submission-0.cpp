class Solution {
public:
    bool divideArray(vector<int>& nums) {
        //hash map where all keys must be even
        unordered_map<int, int> count; //number, how many of them
        for (int numb : nums) {
            if (count.find(numb) == count.end()) {
                count.insert({numb, 1});
            } else {
                count[numb]++;
            }
        } 
        for (std::pair<const int, int> group: count) {
            if (count[group.first] % 2 == 1) {  //first is the key (number of items being counted); second is the item
                return false;
            }
        }
        return true;
    }
};