# Question:
# Given an array of integers nums and an integer target,
# return the indices of the two numbers such that they add up to target.
#
# Example:
# Input: nums = [2, 7, 11, 15], target = 9
# Output: [0, 1]

def twoSum(nums, target):
    hashmap = {}

    for i, num in enumerate(nums):
        complement = target - num

        if complement in hashmap:
            return [hashmap[complement], i]

        hashmap[num] = i

    return []

# Test
nums = [2, 7, 11, 15]
target = 9
print(twoSum(nums, target))  # Output: [0, 1]
  
