# 1512. Number of Good Pairs

# https://leetcode.com/problems/number-of-good-pairs/discuss/731561/JavaC%2B%2BPython-Count

# 還沒看懂

class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        return int(sum(k * (k - 1) / 2 for k in collections.Counter(nums).values()))
