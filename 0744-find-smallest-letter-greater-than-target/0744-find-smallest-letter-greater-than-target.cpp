class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int l=letters.size();
        int min=letters[l-1];
        int t=target;
        if(t>=min){
            return(letters[0]);
        }
        else{
            for(int i=0;i<l;i++){
                min=letters[i];
                if(min>t){
                    return(letters[i]);
                }
            }
        }
        return(letters[0]);
        
    }
};