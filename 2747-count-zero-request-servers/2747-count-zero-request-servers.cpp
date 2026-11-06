#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int l = queries.size(), l1 = logs.size();
        vector<int> arr(l), server_counts(n + 1, 0), q_indices(l);
        
        sort(logs.begin(), logs.end(), [](const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; });
        
        iota(q_indices.begin(), q_indices.end(), 0);
        sort(q_indices.begin(), q_indices.end(), [&](int i, int j) { return queries[i] < queries[j]; });
        
        int left = 0, right = 0, unique_servers = 0;
        
        for (int idx : q_indices) {
            int a = queries[idx] - x, b = queries[idx];
            
            while (right < l1 && logs[right][1] <= b) {
                if (server_counts[logs[right++][0]]++ == 0) unique_servers++;
            }
            while (left < l1 && logs[left][1] < a) {
                if (--server_counts[logs[left++][0]] == 0) unique_servers--;
            }
            
            arr[idx] = n - unique_servers;
        }
        
        return arr;
    }
};
