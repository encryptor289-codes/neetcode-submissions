class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>v;
        for (int i = 0; i < nums.size(); i++) {
            int required_value = target - nums[i];
            if(mp.find(required_value) != mp.end()) {
                v.push_back(mp[required_value]);
                v.push_back(i);
                return v;
            } else if (mp.find(nums[i]) == mp.end()) {
                mp[nums[i]] = i;
            }
        }

        return v;
    }
};
