/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> dupes;
        for (auto x: nums) {
            if (dupes.find(x) != dupes.end()) {
                return true;
            } else {
                dupes.insert(x);
            }
        }

        return false;
    }
};