#include <string>
#include <cctype> // Required for tolower

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        int l = s.size();
        
        for(int i = 0; i < l; i++){
           
            s[i] = tolower(s[i]); 
        } 
        
        return s; 
    } 
};
