class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0, size = s.length() - 1;
        
        while (size >= 0 && s[size] == ' ') {
            size--;
        }
        
        while (size >= 0) {
            if (s[size] == ' ') {
                break;
            } else {
                length++;
                size--;
            }
        }

        return length;
    }
};