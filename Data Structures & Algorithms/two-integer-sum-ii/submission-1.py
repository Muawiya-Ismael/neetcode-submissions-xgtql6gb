class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        left, right = 0, len(numbers) - 1
        while left < right:
            total_sum = numbers[left] + numbers[right]
            if total_sum == target:
                return [left+1, right+1]
            elif total_sum < target:
                left += 1
            else:
                right -= 1
        return []