#define BinSearchInit(x, y) int start = x, end = y, mid = (x + y) / 2
#define Medify() mid = (start + end) / 2
#define BinSearchCondition() start < end

class Solution {
public:
    int findPeakCondition(vector<int>&nums, int id) {
        if(nums.size() == 1)
            return 0;
        if(id == 0)
            return nums[id] > nums[id + 1] ? 0 : 1;
        if(id == nums.size() - 1)
            return nums[id] > nums[id - 1] ? 0 : 1;
        if(nums[id] > nums[id - 1] && nums[id] > nums[id + 1])
            return 0;
        return nums[id] > nums[id + 1] ? -1 : 1;
    }
    int findPeakElement(vector<int>& nums) {
        
        BinSearchInit(0, nums.size() - 1);
        while(start <= end) {
            int peakCondition = findPeakCondition(nums, mid);
            if(peakCondition == 0)
                return mid;
            if(peakCondition == -1)
                end = mid - 1;
            else
                start = mid + 1;
            Medify();
        }
        return -1;
    }
};