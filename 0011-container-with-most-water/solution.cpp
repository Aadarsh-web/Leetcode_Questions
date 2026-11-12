class Solution {
public:
    int maxArea(vector<int>& height) {
        int j=height.size()-1;
        int i=0;
        int final_area=INT_MIN;
        while(i<j){
            int area=min(height[i],height[j])*(j-i);
            final_area=max(area,final_area);
            if(height[j]>height[i]) i++;
            else j--;
        }
        return final_area;
    }
};
