class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxi=0;
        int area=0;
        while(j>i){
            area=min(height[i],height[j])*(j-i);
            maxi=max(maxi,area);
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxi;
    }
};