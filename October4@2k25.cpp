class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0;
        int l=0;
        int r=height.size()-1;

        while(l<r){
            int h=(height[r]<height[l])?height[r]:height[l];
            int emp=(r-l)*h;
            if(emp>max){
               max=emp; 
            }
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return max;
    }
};
