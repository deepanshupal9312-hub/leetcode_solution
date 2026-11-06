class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l = nums.size();
        
        if (l == 1) {
            return 0;
        }
        
        int total_sum = 0;
        for (int i = 0; i < l; i++) {
            total_sum += nums[i];
        }
        
        int left_sum = 0;
        
        for (int i = 0; i < l; i++) {
            if (left_sum == (total_sum - left_sum - nums[i])) {
                return i; 
            }
            
            left_sum += nums[i];
        }
        
        return -1;
    }
};
