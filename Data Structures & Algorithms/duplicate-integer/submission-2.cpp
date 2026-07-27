class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {  //count is the contains
                return true; 
            }
            seen.insert(num);  //insert is the add
        }

        return false;
    }
};