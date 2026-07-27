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
            //count[group.first] got the value but group.second directly gets the value
            if (group.second % 2 == 1) {  //first is the key ; second is the value
                return false;
            }
        }
        return true;
    }
};