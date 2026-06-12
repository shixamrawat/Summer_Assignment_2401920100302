class Solution {
public:
    int compress(vector<char>& chars) {
        int w=0;
        int n=chars.size();
        int i=0;
        while(i<n){
            char curr=chars[i];
            int count=1;
            while(i<n-1 && chars[i+1]==curr){
                count++;
                i++;
            }
            chars[w++] = curr;
            if(count>1){
                string s = to_string(count);
                for(char c : s) chars[w++] = c;
            }
            count=1;
            i++;
        }
        return w;
    }
};