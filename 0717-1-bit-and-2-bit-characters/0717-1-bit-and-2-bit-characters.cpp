class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        while (bits.size() > 2) {
            if (bits[0] == 1) {
                bits.erase(bits.begin(), bits.begin() + 2);
            } else {
                bits.erase(bits.begin());
            }
        }
        
        if (bits.size() == 1) {
            return true;
        } 
            return bits[0] == 0; 
    }
};
