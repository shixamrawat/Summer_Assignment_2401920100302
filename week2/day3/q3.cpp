class Solution {
public:
    // need to improve the time comp to O(1);
    bool repeatedSubstringPattern(string s) {
        int n = s.length();

        for (int l = 1; l <= n / 2;l++) {
            if (n % l == 0) {
                string sub = s.substr(0, l);
                string repeated = "";
                int num_repeats = n / l;
                for (int i = 0; i < num_repeats; ++i) {
                    repeated += sub;
                }
                if (repeated == s) {
                    return true;
                }
            }
        }
        
        return false;
    
    }
};