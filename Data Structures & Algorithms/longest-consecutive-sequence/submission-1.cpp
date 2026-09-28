class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int cnt = 1;
        int max_cnt = 1;
        for(int i = 1; i < nums.size(); i++) {
            int diff = nums[i] - nums[i-1];
            if(diff > 1) {
                max_cnt = max(max_cnt, cnt);
                cnt = 1;
            } else if (diff == 1) {
                cnt++;
            }
        }

        int ans = max(max_cnt, cnt);
        return ans;
    }
};
