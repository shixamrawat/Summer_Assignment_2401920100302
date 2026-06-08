class Solution {
public:
    bool isAnagram(string s, string t) {
        //length need to be same to be anagram
        if(s.length()!=t.length()){
            return false;
        }
        int arr[26]={0};
        //frequency of each character
        for(char ch:s){
            int x=ch-'a';
            arr[x]++;
        }
        //comparison indirect
        for(char ch:t){
            int x=ch-'a';
            arr[x]--; 
            if(arr[x]<0){
                return false;
            }
        }
        return true;

    }
};