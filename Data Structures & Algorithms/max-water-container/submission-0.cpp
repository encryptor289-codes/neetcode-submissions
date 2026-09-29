class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int ans = 0;
        while(i < j) {
            int water_here = min(heights[i], heights[j]) * (j-i);
            ans = max(ans, water_here);
            if(heights[i] <= heights[j]) i++;
            else j--;
        }
        return ans;
    }
};
