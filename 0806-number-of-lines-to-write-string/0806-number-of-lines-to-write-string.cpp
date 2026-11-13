class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int l = s.size();
        int a, count = 0, b = 1; 
        
        for(int i = 0; i < l; i++) {
            a = s[i];
            int w = widths[a - 97];
            
            if(count + w > 100) {
                b++;
                count = w;
            } else {
                count = count + w;
            }
        }
        
        return {b, count}; 
    }
};
