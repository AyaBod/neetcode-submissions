class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //add if not in hashmap
        //remove if in hashmap
        //end will have the 

        unordered_map<int, int> map;
        for (int numb : nums) {
            if (map.count(numb)) { //.find  != map.end()
                map.erase(numb);
            } else {
                map[numb]++;
            }
        }

        return map.begin()->first;
    }
};
