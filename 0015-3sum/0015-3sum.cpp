class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Fix one number
        for(int i = 0; i < nums.size(); i++){

            // Skip duplicate first numbers
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            // Two pointers
            int left = i + 1;
            int right = nums.size() - 1;

            while(left < right){

                int sum = nums[i] + nums[left] + nums[right];

                // We found a triplet
                if(sum == 0){

                    ans.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                    // Skip duplicate left numbers
                    while(left < right && nums[left] == nums[left - 1])
                        left++;

                    // Skip duplicate right numbers
                    while(left < right && nums[right] == nums[right + 1])
                        right--;
                }

                // Sum is too small
                else if(sum < 0){
                    left++;
                }

                // Sum is too big
                else{
                    right--;
                }
            }
        }

        return ans;
    }
};