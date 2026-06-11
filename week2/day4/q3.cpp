class Solution {
public:
    void helper(int open,int close,int n , string& curr,vector<string>&ans){
        if(open==n && close==n){
            ans.push_back(curr);
        }
        if(open<n){
            curr+='(';
            helper(open+1,close,n,curr,ans);
            curr.pop_back();
        }
        if(close<open){
            curr+=')';
            helper(open,close+1,n,curr,ans);
            curr.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string > ans;
        int open=0,close=0;
        string curr="";
        helper(open,close,n,curr,ans);
        return ans;
    }
};