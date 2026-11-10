class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<long long> dp(n + 1, LLONG_MAX);
        
        dp[0] = 0;
        
        for (int i = 1; i <= n; ++i) {
            long long current_step_cost = costs[i - 1];
            long long min_prev_cost = LLONG_MAX;
            
            if (i - 1 >= 0 && dp[i - 1] != LLONG_MAX) {
                min_prev_cost = min(min_prev_cost, dp[i - 1] + 1);
            }
            
            if (i - 2 >= 0 && dp[i - 2] != LLONG_MAX) {
                min_prev_cost = min(min_prev_cost, dp[i - 2] + 4);
            }
            
            if (i - 3 >= 0 && dp[i - 3] != LLONG_MAX) {
                min_prev_cost = min(min_prev_cost, dp[i - 3] + 9);
            }
            
            if (min_prev_cost != LLONG_MAX) {
                dp[i] = current_step_cost + min_prev_cost;
            }
        }
        
        return static_cast<int>(dp[n]);
    }
};
