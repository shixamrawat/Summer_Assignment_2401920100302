class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        //taking 1st string and traversing with it 
        for(int i=0;i<strs[0].size();i++){
            //iteration for each string in strs
            for(int j=0;j<strs.size();j++){
                //if out of bound or charater done match
                if(i>strs[j].size() || strs[0][i]!=strs[j][i]){
                    return ans;
                }
            }
            //else add
            ans+=strs[0][i];
        }  
        return ans;
    }
};