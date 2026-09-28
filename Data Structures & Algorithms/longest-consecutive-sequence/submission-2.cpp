class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        unordered_map<int, int>mp;
        for (int i = 0; i< nums.size(); i++){
            mp[nums[i]]++;
        }
        int ans = 0;
        for (int i = 0; i< nums.size(); i++) {
            if(mp.find(nums[i]-1) == mp.end()) {
                int curr = nums[i];
                int len = 1;
                while(mp.find(curr+1) != mp.end()) {
                    len++;
                    curr++;
                }
                ans = max(ans, len);
            }
        }
        return ans;
    }
};



    // 0(logn) solution
    // int longestConsecutive(vector<int>& nums) {

    //     if(nums.size() == 0) return 0;
    //     sort(nums.begin(), nums.end());
    //     int cnt = 1;
    //     int max_cnt = 1;
    //     for(int i = 1; i < nums.size(); i++) {
    //         int diff = nums[i] - nums[i-1];
    //         if(diff > 1) {
    //             max_cnt = max(max_cnt, cnt);
    //             cnt = 1;
    //         } else if (diff == 1) {
    //             cnt++;
    //         }
    //     }

    //     int ans = max(max_cnt, cnt);
    //     return ans;
    // }
