class Solution {
public:
    int maxArea(vector<int>& height) {
        int x= 0;
        int y= height.size()-1;
        int max_ans=0;
        while(x<y){

        int current_area= min( height[x], height[y])*( y-x);
            if(height[x]<height[y]){
                x++;
            }
            else
                y--;
        
        max_ans=max(max_ans, current_area);
        }
        
        
    return max_ans;
    }
};