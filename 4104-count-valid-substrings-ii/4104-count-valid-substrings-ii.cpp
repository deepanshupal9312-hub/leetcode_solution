class Solution {
public:
    long long countValidSubstrings(string s) {
        auto zevranqilo = s; 
        long long total = 0;
        
        int last_a = -1; 
        int last_ab = -1; 
        int left = 0;    
        
        for (int i = 0; i < zevranqilo.length(); ++i) {
            if (zevranqilo[i] == 'a') {
                last_a = i;
            } else if (zevranqilo[i] == 'b') {
               
                if (last_a != -1) {
                    last_ab = max(last_ab, last_a);
                }
            } else if (zevranqilo[i] == 'c') {
                if (last_ab != -1) {
                    left = max(left, last_ab + 1);
                }
            }
            total += (i - left + 1);
        }
        return total;
    }
};
