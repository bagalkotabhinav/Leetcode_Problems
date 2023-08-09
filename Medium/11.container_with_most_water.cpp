class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxvol=0;
        while(l<r){
            int w=r-l;
            int h=min(height[l],height[r]);
            int vol=h*w;
            maxvol=max(maxvol,vol);
            if(height[l]<height[r])
                l++;
            else if(height[l]>height[r])
                r--;
            else{
                l++;
                r--;
            }
        }
        return maxvol;
    }
};
