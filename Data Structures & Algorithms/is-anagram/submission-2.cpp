class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> sMap;
        std::unordered_map<char, int> tMap;

        for (char ss : s) {
            sMap[ss]++; //if not already in map adds key as 0, if in they key increments
        }


        for (char ss : t) {
            tMap[ss]++; //if not already in map adds key as 0, if in they key increments
        }

        if (!(sMap==(tMap))) {
            return false;
        } else {
            return true;
        }


    }
};
