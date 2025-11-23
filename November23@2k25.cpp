class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp(3, 0);  

        for (int x : nums) {
            vector<int> prev = dp;
            for (int r = 0; r < 3; r++) {
                int newSum = prev[r] + x;
                dp[newSum % 3] = max(dp[newSum % 3], newSum);
            }
        }

        return dp[0];
    }
};
