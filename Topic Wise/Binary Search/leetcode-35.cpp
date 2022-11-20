class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int med = (start + end)/2;
        if(nums[end] < target)
            return nums.size();
        while(start < end) {
            if(nums[med] == target)
                return med;
            if(nums[med] < target)
                start = med + 1;
            else
                end = med;
            med = (start + end)/2;
        }
        return med;
    }
};