class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        unordered_map <int, int> hash;
        
        for (i = 0; i < nums.size(); i++) {
            if (hash.find(target - nums[i]) == hash.end()) {
                hash[nums[i]] = i;
            } else {
                return {hash[target - nums[i]], i};
            }
        }
        
        return {};
    }
};
