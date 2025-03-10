/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map = {};

        for (char c: s) {
            if (map.find(c) != map.end()) {
                map[c]++;
            } else {
                map[c] = 1;
            }
        }

        for (char c: t) {
            if (map.find(c) != map.end()) {
                map[c]--;
            } else {
                return false;
            }
        }

        for (auto it: map) {
            if (it.second != 0) {
                return false;
            }
        }

        return true;
    }
};
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};

        for (auto c: s) {
            count[c - 'a']++;
        }
        for (auto c: t) {
            count[c - 'a']--;
        }
        for (auto i: count) {
            if (i != 0) {
                return false;
            }
        }

        return true;
    }
};
