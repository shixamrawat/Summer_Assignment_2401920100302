class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;            //index at which we have unique element
        for(int j=0;j<nums.size();j++){//traversing through the array 
            if(nums[j]!=nums[i]){//if unique element found
                nums[i+1]=nums[j];//swap to 2nd pos of i
                i++;
            }
        }
        return i+1;
    }
};