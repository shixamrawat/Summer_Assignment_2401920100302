class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.length()-1;

        while(l<r){
            //isalnum check if the char is alphabet or num
            if(!isalnum(s[l])){
                l++;
                continue;
            }
            if(!isalnum(s[r])){
                r--;
                continue;
            }
            //tolower is used to convert uppercase to lowercase
            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};