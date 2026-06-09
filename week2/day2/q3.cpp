    class Solution {
    public:
        vector<int> findAnagrams(string s, string p) {
            vector<int>ans;
            if(s.size()<p.size()) return ans;
            vector<int> freqs(26,0);
            vector<int> freqp(26,0);
            for(int i=0;i<p.size();i++){
                freqs[s[i]-'a']++;
                freqp[p[i]-'a']++;
            }
            int matches=0;
            for(int i=0;i<26;i++){
                if(freqp[i]==freqs[i]){
                    matches++;
                }
            }

            int l=0,r=p.length();
            while(r<s.length()){
                if(matches==26){
                    ans.push_back(l);
                }
                int index = s[r] - 'a';
                freqs[index]++;
                // if after updating value freq become equal then we increase
                
                if (freqp[index] == freqs[index]) {
                    matches++;
                }
                // if prev freq was eqal that means now it have been changed
                else if (freqs[index] -1 == freqp[index]) {
                    matches--;
                }

                index = s[l] - 'a';
                freqs[index]--;
                // if after updating value freq become equal then we increase 
                if (freqp[index] == freqs[index]) {
                    matches++;
                    
                } 
                // if prev freq was eqal that means now it have been changed
            
                else if (freqs[index]+1== freqp[index]) {
                    matches--;
                }
                l++;
                r++;
            }
            if(matches == 26) ans.push_back(l);
            return ans;
        }
    };