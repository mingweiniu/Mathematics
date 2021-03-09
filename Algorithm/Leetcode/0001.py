# 1480 Running Sum of 1d Array
""" Python3 """
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        return accumulate(nums)
