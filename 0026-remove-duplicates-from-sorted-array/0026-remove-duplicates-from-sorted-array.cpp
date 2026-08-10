class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int officer=0; // for last unique element
        int cm=1; //scans array
        int k=1; // stores unique elements
        while(cm<nums.size()){
            if(nums[cm]==nums[cm-1]){
                cm++;
                continue;
            }
            else
                nums[officer+1]=nums[cm];
                officer++;
                k++;
                cm++;
        }
        return k;
    }
};