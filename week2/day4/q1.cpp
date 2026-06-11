class Solution {
public:
    string reverseWords(string s) {
        int l=0,r=0;
        int n=s.size();
        for (int r = 0; r <= n; r++) {
            if (r == n || s[r] == ' ') {
                reverse(s.begin() + l, s.begin() + r);
                l = r + 1;
            }
        }
        return s;
    }
};