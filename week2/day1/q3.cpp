class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26]={0};
        for(char ch:magazine){
            int i=ch-'a';
            freq[i]++;
        }
        for(char ch:ransomNote){
            int i=ch-'a';
            if(freq[i]==0) return false;
            freq[i]--;
        }
        return true;
    }
};