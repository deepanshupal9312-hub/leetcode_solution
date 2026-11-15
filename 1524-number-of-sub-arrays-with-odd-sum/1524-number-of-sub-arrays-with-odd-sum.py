class Solution(object):
    def numOfSubarrays(self, arr):
        MOD = 10**9 + 7
        o= 0
        e= 1 
        s = 0
        ans = 0

        for num in arr:
            s += num
            if s % 2 == 0:
                ans = (ans + o) % MOD
                e += 1
            else:
                ans = (ans + e) % MOD
                o += 1

        return ans
