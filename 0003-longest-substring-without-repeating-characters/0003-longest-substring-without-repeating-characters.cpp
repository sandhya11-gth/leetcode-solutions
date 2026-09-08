class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int ans=0;
    int left=0;
    int right=0;
    while(right<s.size()){
        int i;
    for(i=left; i<right; i++){
        if(s[i]==s[right]){
            left++;
            break;
        }
    }
        if(i==right){
        
        ans = max(ans, right - left + 1);
        right++;
        } 
    }
    return ans;
    }
};