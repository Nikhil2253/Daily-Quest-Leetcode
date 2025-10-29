class Solution {
public:
    int smallestNumber(int n) {
        int bitLen = 0;
        int tmp = n;
        while (tmp > 0) {
            bitLen++;
            tmp >>= 1;
        }
        return (1 << bitLen) - 1;
    }
};
