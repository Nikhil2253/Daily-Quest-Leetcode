class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int n = spells.size();
        int m = potions.size();
        vector<int> ans(n, 0);

        for(int i = 0; i < n; i++) {
            long long spell = spells[i];
            int left = 0, right = m - 1, idx = m;

            while(left <= right) {
                int mid = left + (right - left) / 2;
                if(spell * 1LL * potions[mid] >= success) {
                    idx = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }

            ans[i] = m - idx;
        }

        return ans;
    }
};
