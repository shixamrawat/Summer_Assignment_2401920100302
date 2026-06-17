class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;      //this is to create the ans for nums1
        stack<int> st;
        //Step 1 making a map which have element and its next greatest element 
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && nums2[i]>=st.top() ){
                st.pop();
            }
            if(st.empty()){
                mp[nums2[i]]=-1;
            }
            else{
                mp[nums2[i]]=st.top();

            }
            st.push(nums2[i]);
        }
        // Step 2 making the ans for element present in nums1
        vector<int> ans;
        for(int num: nums1){
            ans.push_back(mp[num]);
        }
        return ans;
    }
};