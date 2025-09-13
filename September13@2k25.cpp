class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> alphabets(26, 0);
        int maxFreq = 0;
        int sum = 0;
        for (char &ch : s) {
            if (!isConsonant(ch)) {
                int index = getIndex(ch);
                alphabets[index]++;
                if (maxFreq < alphabets[index]) {
                    maxFreq = alphabets[index];
                }
            } else {
                int index = getIndex(ch);
                alphabets[index]++;
                if (sum < alphabets[index]) {
                    sum = alphabets[index];
                }
            }
        }
        return maxFreq+sum;
    }

private:
    bool isConsonant(char c) {
        c = tolower(c);
        return (c >= 'a' && c <= 'z' && 
                !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'));
    }

    int getIndex(char c) {
        return tolower(c) - 'a';
    }
};
