class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int lst=n-1;
        vector<int> ans(n);
        while(l<=r){
            if(abs(nums[l])<abs(nums[r])){
                ans[lst]=nums[r]*nums[r];
                lst--;
                r--;
            }
            else{
                ans[lst]=nums[l]*nums[l];
                l++;
                lst--;
            }
        }
        return ans;
    }
};