# 1480 Running Sum of 1d Array

## C++
vector<int> runningSum(vector<int>& nums) {
    partial_sum(nums.begin(), nums.end(), nums.begin());
    return nums;
}


## Python3
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        return accumulate(nums)
