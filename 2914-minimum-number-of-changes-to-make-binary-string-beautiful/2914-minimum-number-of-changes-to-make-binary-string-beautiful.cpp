class Solution {
public:
    int minChanges(string s) {
        int a=0,l=s.size();
        for(int i=0;i<l;i+=2){
            if(s[i]!=s[i+1]){
                a=a+1;
            }
        }
        return a;
        
    }
};