class Solution {
public:
    int maxArea(vector<int>& height) {
        //two pointer approach as we have to implement a loop otherwise
        int n=height.size();
        int start=0,last=n-1,temp;
        int vol=INT_MIN;
        while(start<last){
            //temp calculate area formed by lines at start and last
            int h=min(height[start],height[last]);
            int width=last-start;
            temp=h*width;
            //selecting the max area
            vol=max(vol,temp);
            //if height[start]<height[last] then we need to increase start to find a taller height
            if(height[start]<height[last]){
                start++;
            }
            //if height[start]>height[last] then we need to decrease last to find a taller height
            else{
                last--;
            }
        }
        return vol;
    }
};