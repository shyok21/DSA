class Solution(object):
    def firstBadVersion(self, n):
        [start, end] = [1, n]
        med = (start + end) // 2
        while start < end:
            bad_version_status = isBadVersion(med)
            if bad_version_status == True:
                end = med
            else:
                start = med + 1
            med = (start + end) // 2
        return med