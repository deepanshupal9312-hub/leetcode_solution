class Solution {
public:
    int maxLength(vector<int>& nums) {
        int l=nums.size();
        int ans=1;
        
        for(int i=0;i<l;i++){
            int a=1,g=0,lc=1;
            for(int j=i;j<l;j++){
                a*=nums[j];
                g=gcd(g,nums[j]);
                lc=lcm(lc,nums[j]);
                if(a>lc*g)
                break;
                if(a==lc*g)
                ans=max(ans,j-i+1);
            }

        }
        return ans;
        
    }
};