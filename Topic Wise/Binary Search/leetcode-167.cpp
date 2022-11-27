#define LOOP(x, y, z) for(int i = x; i < y; i += z)
#define MidInit() int mid = (start + end) / 2
#define Midify() mid = (start + end) / 2

class Solution {
public:
    int BinarySearch(vector<int>& numbers, int start, int end, int target) {
        MidInit();
        while(start <= end) {
            if(numbers[mid] == target)
                return mid;
            if(numbers[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
            Midify();
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>Result;
        LOOP(0, numbers.size(), 1) {
            int id = BinarySearch(numbers, i + 1, numbers.size() - 1, target - numbers[i]);
            if(id != -1) {
                Result.push_back(i + 1);
                Result.push_back(id + 1);
                return Result;
            }
        }
        return Result;
    }
};