class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int sum= nums[0]+nums[1]+nums[2];
        for (int i = 0; i < nums.size() - 2; i++) {

        int left= i+1;
        int right= nums.size()-1;
         while (left < right) {
            int current= nums[left]+ nums[right]+nums[i];
             if (abs(current - target) < abs(sum - target)) {
                    sum = current;
                }
             if (current < target) {
                    left++;
                }
                else if (current > target) {
                    right--;
                }
                else {
                    return current;
                }
            }
        }

        return sum;
    }
    };