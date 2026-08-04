class Solution {
public:
    int search(vector<int>& nums, int target) {

        int beg = 0;
        int end = nums.size() - 1;

        while(beg <= end) {

            int mid = (beg + end) / 2;

            // Target found
            if(nums[mid] == target) {
                return mid;
            }

            // Search in right half
            else if(nums[mid] < target) {
                beg = mid + 1;
            }

            // Search in left half
            else {
                end = mid - 1;
            }
        }

        // Target not found
        return -1;
    }
};