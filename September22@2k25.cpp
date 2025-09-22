class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101, 0);
        int maximum = 0;

        for (int num : nums) {
            freq[num]++;
            maximum = max(maximum, freq[num]);
        }

        int ans = 0;
        for (int count : freq) {
            if (count == maximum) {
                ans += count;
            }
        }

        return ans;
    }
};
