class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        int n,a=0,s=0;
        for(int i=left;i<=right;i++){
            n=i;
            s=0,a=0;
            while(n>0){
                if((n%10)!=0 && i%(n%10)==0 ){
                    a=a+1;
                }
                s=s+1;
                n=n/10;

            }
            if(s==a){
                ans.push_back(i);
            }
            
        }
        return ans;
        
    }
};