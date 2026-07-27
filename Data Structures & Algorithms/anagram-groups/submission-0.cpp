class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //given an array of strings
        //till seen every string create a new array for each anagram group when new one found

        // Key: The sorted version of the string (the signature)
        // Value: A list of all original strings that match that signature
        std::unordered_map<std::string, std::vector<std::string>> groups = {};
        for (string word : strs) {
            std::string sorted = word; 
            std::sort(sorted.begin(), sorted.end());

            groups[sorted].push_back(word); //if group not already made itll be makde with word in key
        }
        //need to turn table into a vector of vectors
        std::vector<std::vector<std::string>> result; //list of strings
        for (auto&[key, group]: groups) {
            result.push_back(group); //for each new entry in result is the entire entry with the category/key
        }

        return result;
    }
};
