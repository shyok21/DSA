class Solution(object):
    def pivot_search(self, nums):
        start = 0
        end = len(nums) - 1
        med = (start + end) // 2
        while(start < med):
            if med == len(nums):
                return med
            if nums[med] > nums[med + 1]:
                return med
            if nums[start] < nums[med]:
                start = med
            else:
                end = med
            med = (start + end) // 2
        return med

    def target_search(self, nums, target, start, end):
        med = (start + end) // 2
        while start <= end:
            if nums[med] == target:
                return med
            if nums[med] < target:
                start = med + 1
            else:
                end = med - 1
            med = (start + end) // 2
        return -1

    def find_max(self, x, y):
        return x if(x > y) else y

    def search(self, nums, target):
        pivot = self.pivot_search(nums)
        left_array_target = self.target_search(nums, target, 0, pivot)
        right_array_target = self.target_search(nums, target, pivot + 1, len(nums) - 1)
        return self.find_max(left_array_target, right_array_target)
