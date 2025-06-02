class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        i, j = 0, len(numbers)-1
        while i < j:
            twoSum = numbers[i] + numbers[j]
            if twoSum == target:
                return [i+1, j+1]
            elif twoSum > target:
                j -= 1
            else:
                i += 1