class Solution {
public:
    bool checkString(string s) {
        int l = size(s), a = 1; 
        for (int i = 0; i < l - 1; i++) {
            if ((s[i] == 'a' && s[i+1] == 'a') || 
                (s[i] == 'a' && s[i+1] == 'b') || 
                (s[i] == 'b' && s[i+1] == 'b')) {
                a = 1;
            } else {
                a = 0;
                break;
            }
        }
        return a == 1;
    }
};
