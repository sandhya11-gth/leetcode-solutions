class Solution {
public:
    int maxArea(vector<int>& height) {
        int x= 0;
        int y= height.size()-1;
        int max_ans=0;
        while(x<y){

        int current_area;
            if(height[x]<height[y]){
                current_area= (y-x) * height[x];
                x++;
            }
            else{
                current_area= (y-x)* height[y];
                y--;}
        
        max_ans=max(max_ans, current_area);
        }
        
        
    return max_ans;
    }
};