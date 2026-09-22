class Solution {
public:
 bool isAlnum(char c) {
        return (c >= 'a' && c <= 'z') ||
               (c >= 'A' && c <= 'Z') ||
               (c >= '0' && c <= '9');
    }

    char toLower(char c) {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
        return c;
    }
    bool isPalindrome(string s) {
        int left= 0;
        int right= s.size()-1;
        while(left<right){
        while(left<right && !isAlnum(s[left])){
            left++;
        }
        while(left<right && !isAlnum(s[right])){
            right--;
        }

        if(toLower(s[left])!= toLower(s[right])){
            return false;
        }

        left++;
        right--;
     
}
    return true;
    }
};