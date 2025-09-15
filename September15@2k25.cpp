class Solution {
public:
    bool isBrokenChar(char text, string& brokenLetters) {
        for (int i = 0; i < brokenLetters.length(); i++) {
            if (text == brokenLetters[i]) {
                return true;
            }
        }
        return false;
    }

    int canBeTypedWords(string text, string brokenLetters) {
        bool isBroken = false;
        int count = 0;

        for (int i = 0; i < text.length(); i++) {
            if (text[i] == ' ') {
                if (!isBroken) {
                    count++; 
                }
                isBroken = false; 
            } else {
                if (isBrokenChar(text[i], brokenLetters)) {
                    isBroken = true; 
                }
            }
        }

        if (!isBroken) {
            count++;
        }

        return count;
    }
};
