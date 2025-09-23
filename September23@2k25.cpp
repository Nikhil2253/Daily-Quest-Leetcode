class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> nums1 = split(version1);
        vector<int> nums2 = split(version2);
        
        int n = max(nums1.size(), nums2.size());
        for (int i = 0; i < n; i++) {
            int v1 = (i < nums1.size() ? nums1[i] : 0);
            int v2 = (i < nums2.size() ? nums2[i] : 0);
            if (v1 < v2) return -1;
            if (v1 > v2) return 1;
        }
        return 0;
    }
    
private:
    vector<int> split(string &version) {
        vector<int> nums;
        string temp = "";
        for (char ch : version) {
            if (ch != '.') {
                temp += ch;
            } else {
                nums.push_back(temp.empty() ? 0 : stoi(temp));
                temp = "";
            }
        }
        if (!temp.empty()) nums.push_back(stoi(temp));
        return nums;
    }
};
