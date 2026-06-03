class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                //swap non zero value to front using j
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};