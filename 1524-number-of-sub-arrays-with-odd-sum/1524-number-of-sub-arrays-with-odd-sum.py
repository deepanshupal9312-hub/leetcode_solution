class Solution(object):
    def numOfSubarrays(self, arr):
        MOD = 10**9 + 7
        odd_count = 0
        even_count = 1 
        current_sum = 0
        ans = 0

        for num in arr:
            current_sum += num
            if current_sum % 2 == 0:
                ans = (ans + odd_count) % MOD
                even_count += 1
            else:
                ans = (ans + even_count) % MOD
                odd_count += 1

        return ans
