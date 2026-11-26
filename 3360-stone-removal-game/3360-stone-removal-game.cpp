class Solution {
public:
    bool canAliceWin(int n) {
        int stones = 10;
        bool aliceT = true;
        
        while (n >= stones) {
            n -= stones;
            stones--;
            aliceT = !aliceT;
        }
        
       
        return !aliceT; 
    }
};
