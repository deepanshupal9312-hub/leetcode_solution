#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> history; 
        int l = operations.size();
        int a = 0, b = 0, c = 0;

        for(int i = 0; i < l; i++) {
            if(operations[i] == "+") {
                b = history[history.size() - 1]; 
                a = history[history.size() - 2];
                
                c = a + b;
                history.push_back(c);
            }
            else if(operations[i] == "D") {
                b = history[history.size() - 1]; 
                
                c = b * 2;
                history.push_back(c);
            }
            else if(operations[i] == "C") {
                
                history.pop_back();
            }
            else {
               
                c = stoi(operations[i]);
                history.push_back(c);
            }
        }

   
        c = 0;
        for (int i = 0; i < history.size(); i++) {
            c += history[i];
        }

        return c;
    }
};
