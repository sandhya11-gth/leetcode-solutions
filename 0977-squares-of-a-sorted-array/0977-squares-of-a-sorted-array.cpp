class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> neg;
        vector<int> pos;

        // Step 1: Separate negative and positive numbers
        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] < 0) {
                neg.push_back(nums[i]);
            }
            else {
                pos.push_back(nums[i]);
            }
        }

        // Step 2: Square negative numbers
        for(int i = 0; i < neg.size(); i++) {
            neg[i] = neg[i] * neg[i];
        }

        // Step 3: Square positive numbers
        for(int i = 0; i < pos.size(); i++) {
            pos[i] = pos[i] * pos[i];
        }

        // Step 4: Reverse negative squares
        reverse(neg.begin(), neg.end());

        // Now both arrays are sorted
        // neg = [1, 4, 9]
        // pos = [4, 9, 16]

        vector<int> res(neg.size() + pos.size());

        int i = 0;  // points to neg
        int j = 0;  // points to pos
        int id = 0; // points to res

        // Step 5: Merge both arrays
        while(i < neg.size() && j < pos.size()) {

            if(neg[i] <= pos[j]) {
                res[id] = neg[i];
                i++;
            }
            else {
                res[id] = pos[j];
                j++;
            }

            id++;
        }

        // Remaining negative squares
        while(i < neg.size()) {
            res[id] = neg[i];
            i++;
            id++;
        }

        // Remaining positive squares
        while(j < pos.size()) {
            res[id] = pos[j];
            j++;
            id++;
        }

        return res;
    }
};