#include <vector>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.empty()) return 0;

        int a = 1, b = 1, c = 1;
        int l = nums.size();
        
        for(int i = 0; i < l - 1; i++){
            if(nums[i] < nums[i+1]){
                a = a + 1;
                
                if (a > c) {
                    c = a;
                }
            }
            else{
                a = 1; 
            }
        }
        return c;
    }
};
