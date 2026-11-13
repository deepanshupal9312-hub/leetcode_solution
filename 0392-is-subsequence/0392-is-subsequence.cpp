class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j=0;
        if(s==""){
            return true;
        }
        int l=t.size();
        for(i=0;i<l;i++){
            if(t[i]==s[j]){
                j++;
            }
        }    

       
        return (s.size()==j);
        
    }
};