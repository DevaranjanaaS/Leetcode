class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxi=0;
        while(j>i){
            int area=min(height[i],height[j])*(j-i);
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