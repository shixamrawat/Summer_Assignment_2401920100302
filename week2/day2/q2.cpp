class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        //tracking freq of s1 and the siding window of s2
        vector<int> freqs1(26,0);
        vector<int> freqs2(26,0);

        // created a window for freq of s2
        for(int i=0;i<s1.length();i++){
            freqs1[s1[i]-'a']++;
            freqs2[s2[i]-'a']++;
        }
        int matches=0;
        for(int i=0;i<26;i++){
            if(freqs1[i]==freqs2[i]){
                matches++;
            }
        }

        int l=0,r=s1.length();
        while(r<s2.length()){
            //all freq in freq1 matches that of freq2 block
            if(matches==26){
                return true;
            }
            int index = s2[r] - 'a';
            freqs2[index]++;
            // if after updating value freq become equal then we increase
            
            if (freqs1[index] == freqs2[index]) {
                matches++;
            }
            // if prev freq was eqal that means now it have been changed
             else if (freqs2[index] -1 == freqs1[index]) {
                matches--;
            }

            index = s2[l] - 'a';
            freqs2[index]--;
            // if after updating value freq become equal then we increase 
            if (freqs1[index] == freqs2[index]) {
                matches++;
                
            } 
            // if prev freq was eqal that means now it have been changed
        
            else if (freqs2[index]+1== freqs1[index]) {
                matches--;
            }
            l++;
            r++;
        }
        return matches==26;
    }
};