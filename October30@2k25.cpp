class Solution {
public:
   vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> countMap;
        
        for (int num : nums) {
            countMap[num]++;
        }
        
        for (auto& entry : countMap) {
            if (entry.second == 2) {
                ans.push_back(entry.first);
            }
        }
        
        return ans;
    }
};
