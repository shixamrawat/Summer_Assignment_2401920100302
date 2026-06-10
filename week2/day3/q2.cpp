class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int m=s.size();
        int n=t.size();
        
        while(i<m && j<n){
            // if char matched we check the next i if it's present 
            // this also make sure that all the elements are present after one another
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==m;
    }
};