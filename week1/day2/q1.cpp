class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kedan's algorithm
        int maxsum=INT_MIN;
        int cursum=0;
        int start=0,end=0,tempstart=0;
        for(int i=0;i<nums.size();i++){
            cursum+=nums[i];
            // If the current sum becomes greater than maxSum
            if(cursum>maxsum){
                maxsum=cursum;
                start =tempstart;
                end=i;
            }
            maxsum=max(maxsum,cursum);
            // If the current sum drops below 0,
            // reset it to 0 and move tempStart to the next index
            // (because a negative sum can't help future subarrays)
            if(cursum<0){
                cursum=0;
                tempstart=i+1;
            }
        }
        return maxsum;
    }
};