class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>result;
        //loop for traversing element
        for(int i=0;i<nums.size();i++){
            //removing element that are not the part of current window
            if(!dq.empty() && dq.front()<=i-k){
                dq.pop_front();
            }

            //removing back element from back that are smaller than current val
            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }

            //add current element
            dq.push_back(i);
            //add element when 1st window is made
            if(i>=k-1){
                result.push_back(nums[dq.front()]);
            }
        }
        return result;
    }
};