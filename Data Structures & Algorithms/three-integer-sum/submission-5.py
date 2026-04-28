class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        output = set()
        for i in range(len(nums) - 1):
            l, r = i + 1, len(nums) - 1
            while l < r:
                totalSum = nums[i]+ nums[l] + nums[r]
                if totalSum == 0:
                    output.add((nums[i], nums[l], nums[r]))
                    l += 1
                    r -= 1
                elif totalSum < 0:
                    l += 1
                else:
                    r -= 1
        return list(output) 