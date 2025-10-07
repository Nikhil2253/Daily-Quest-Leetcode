class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n, 1);
        unordered_map<int, int> fullLakes;
        set<int> dryDays;

        for (int i = 0; i < n; i++) {
            if (rains[i] > 0) {
                int lake = rains[i];
                if (fullLakes.count(lake)) {
                    auto it = dryDays.upper_bound(fullLakes[lake]);
                    if (it == dryDays.end()) return {};
                    ans[*it] = lake;
                    dryDays.erase(it);
                }
                fullLakes[lake] = i;
                ans[i] = -1;
            } else {
                dryDays.insert(i);
            }
        }

        return ans;
    }
};
