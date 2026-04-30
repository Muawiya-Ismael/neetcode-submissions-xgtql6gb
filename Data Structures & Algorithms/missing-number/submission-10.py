class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        arr = [False] * (len(nums)+1)
        for num in nums:
            arr[num]=True
        for val in range(len(arr)):
            if not arr[val]:
                return val