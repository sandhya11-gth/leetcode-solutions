class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        int i=0;
        while(i<s.size()){
            st.push(s[i]);
            i++;


        }
       int j = 0;

        while (!st.empty()){
            char x = st.top();
            st.pop();

            s[j] = x;
            j++;
        }
       }
    
};