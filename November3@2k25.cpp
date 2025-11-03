class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int result = 0;
        int maxCost = neededTime[0];

        for (int i = 1; i < n; i++) {
            if (colors[i] == colors[i-1]) {
                result += min(maxCost, neededTime[i]);
                maxCost = max(maxCost, neededTime[i]);
            } else {
                maxCost = neededTime[i];
            }
        }
        return result;
    }
};
