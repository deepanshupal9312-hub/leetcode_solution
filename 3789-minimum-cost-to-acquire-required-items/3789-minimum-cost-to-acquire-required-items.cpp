class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long a=min({need1,need2});
        long s1=a*min({cost1+cost2,costBoth});
        long b=need1-a;
        long s2=b*min({cost1,costBoth});
        long c=need2-a;
        long s3=c*min({cost2,costBoth});
        return(s1+s2+s3);
    }
};