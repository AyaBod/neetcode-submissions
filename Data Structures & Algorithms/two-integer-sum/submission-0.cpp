class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> built;
        for (int i = 0; i<nums.size(); i++) {
            int diff = target - nums[i];
            if (built.find(diff) != built.end()) {
                return {built[diff], i}; //get is just [] here 
            } else {
                built.insert({nums[i], i});
            }
        }
        //never found it
        return {};
    }
};
