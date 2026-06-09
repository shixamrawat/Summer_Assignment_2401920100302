class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int>hash(256,-1);
        int n=s.size();
        int l=0,r=0;
        int maxlen=0;
        while(r<n){
            //if current char alr seen and within current window
            if(hash[s[r]]!=-1 && hash[s[r]]>=l){
                l=hash[s[r]]+1;     //move the pointer after the duplicate
            }
            hash[s[r]]=r;       //update last seem idx
            maxlen=max(maxlen,r-l+1);   //check the max window
            r++;

        }
        return maxlen;
    }
};
