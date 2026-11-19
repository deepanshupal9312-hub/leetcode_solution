class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=s.length();
        int tem=0;
        if(l==0)
        return 0;
        for(int i=0;i<l;i++){
            vector<bool> seen(256, false);
            int c = 0;
            
            for (int j = i; j < l; j++) {
                if (seen[s[j]]) {
                    break;
                }
                seen[s[j]] = true;
                c++;
            }
            tem = max(tem, c);
        }
        return tem;
    }
};