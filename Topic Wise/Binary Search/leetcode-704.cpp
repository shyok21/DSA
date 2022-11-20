/* 
Problem Statement: https://leetcode.com/problems/binary-search/description/?envType=study-plan&id=algorithm-i
*/

#include<vector.h>

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;

        while(start <= end) {
            int med = (start + end)/2;
            if(nums[med] == target)
                return med;
            if(nums[med] < target)
                start = med + 1;
            else
                end = med - 1;
        }
        return -1;
    }
};