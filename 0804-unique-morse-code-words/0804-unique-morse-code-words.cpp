#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", 
            ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", 
            "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
        };
        
        unordered_set<string> unique_transformations;
        
        for (const string& word : words) {
            string tem= "";
            
            for (char c : word) {
                int index = c - 'a'; 
                tem += morse[index];
            }
            
            unique_transformations.insert(tem);
        }
        
        return unique_transformations.size();
    }
};
