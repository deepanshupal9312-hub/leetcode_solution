#include <vector>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        vector<int> request_counts(k, 0);
        
        set<int> available;
        for (int i = 0; i < k; ++i) {
            available.insert(i);
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> busy;
        
        for (int i = 0; i < arrival.size(); ++i) {
            int start = arrival[i];
            int duration = load[i];
            
            while (!busy.empty() && busy.top().first <= start) {
                available.insert(busy.top().second);
                busy.pop();
            }
            
            if (available.empty()) {
                continue;
            }
            
            int target = i % k;
            
            auto it = available.lower_bound(target);
            
            if (it == available.end()) {
                it = available.begin();
            }
            
            int chosen_server = *it;
            request_counts[chosen_server]++;
            
            available.erase(it);
            busy.push({start + duration, chosen_server});
        }
        
        int max_requests = *max_element(request_counts.begin(), request_counts.end());
        
        vector<int> result;
        for (int i = 0; i < k; ++i) {
            if (request_counts[i] == max_requests) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
