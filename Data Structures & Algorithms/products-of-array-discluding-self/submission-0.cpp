class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix_v1;
        vector<int>suffix_v2;
        prefix_v1.push_back(1);
        suffix_v2.push_back(1);
        int value = 1;
        for(int i = 1; i < nums.size(); i++) {
            value = value * nums[i-1];
            prefix_v1.push_back(value);
        }
        value = 1;
        for(int i=nums.size()-2; i>= 0; i--){
            value = value * nums[i+1];
            suffix_v2.push_back(value);
        }
        reverse(suffix_v2.begin(),suffix_v2.end());

        vector<int>ans;
        for(int i=0;i<prefix_v1.size();i++) {
            ans.push_back(prefix_v1[i] * suffix_v2[i]);
        }
        return ans;
    }
};
