class Solution {
public:
    bool judgeCircle(string moves) {
        int hor=0,ver=0;
        int l=moves.size();
        for(int i=0;i<l;i++){
            if(moves[i]=='L'){
                hor=hor-1;
            }
            else if(moves[i]=='R'){
                hor=hor+1;
            }
            else if(moves[i]=='U'){
                ver=ver+1;
            }
            else if(moves[i]=='D'){
                ver=ver-1;
            }
        }
        return(hor==0 && ver==0);
        
    }
};