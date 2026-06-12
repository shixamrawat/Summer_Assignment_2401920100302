class Solution {
public:
    string expand(string& s, int l, int r) {
        while (l>=0 && r<s.size() && s[l] == s[r]) {
        l--;    
        r++;
        }
        return s.substr(l+1, r-l-1);
    }
    string longestPalindrome(string s) {
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            // odd length: call expand with l=i, r=i
            string odd=expand(s,i,i);
            // even length: call expand with l=i, r=i+1
            string even=expand(s,i,i+1);
            
            // update result if you found something longer
            if(odd.size()>ans.size()) ans=odd;
            if(even.size()>ans.size()) ans=even;
        }
        return ans;
    }
};