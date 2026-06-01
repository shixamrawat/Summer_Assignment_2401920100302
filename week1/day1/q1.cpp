class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //mapping key value
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            //search in map if need present
            if(mp.find(need)!=mp.end()){
                return{mp[need],i};
            }
            //add the current element in map
            mp[nums[i]]=i;
        }
        return {};
    }
};