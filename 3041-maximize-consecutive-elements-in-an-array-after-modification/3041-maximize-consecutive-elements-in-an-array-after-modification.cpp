class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        unordered_map<int, int> m;
        int a = 0;
        sort(nums.begin(), nums.end());
        

        for (int x : nums) {
            m[x + 1] = m[x] + 1;
            m[x] = m[x - 1] + 1;
            a = max({a, m[x], m[x + 1]});
        }

        return a;
    }
};
