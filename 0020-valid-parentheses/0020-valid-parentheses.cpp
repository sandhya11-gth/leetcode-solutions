class Solution {
public:
    bool isValid(string s) {
      vector <char> box;
      for(int i=0; i< s.size();i++){
        if(s[i]=='(' || s[i]== '{' || s[i]== '['){
      box.push_back(s[i]) ; 
      
    
        }
      else { 
        if(box.empty())
        return false;

        if(s[i]== ')'&& box.back()!= '(' ||
        s[i]== '}' && box.back()!= '{'||
        s[i]== ']' && box.back()!= '[')
        return false;
        box.pop_back();}
    }
    
    return box.empty();
    

    }
    
};