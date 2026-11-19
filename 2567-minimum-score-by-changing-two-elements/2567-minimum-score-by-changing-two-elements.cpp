class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int l=nums.size();
        sort(nums.begin(), nums.end());
        int a=nums[l-1]-nums[2];
        int b=nums[l-3]-nums[0];
        int c=nums[l-2]-nums[1];
        int m = min({a, b, c});
        return m;
    }
};