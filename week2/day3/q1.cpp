class Solution {

public:
    int strStr(string haystack, string needle) {
        int n = haystack.length(), m = needle.length();
        // outerloop to check if this is the starting
        for (int i = 0; i < n - m + 1; i++) {
            int j = 0;
            // checing if it matches
            while (j < m) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
                j++;
            }
            // if it reaches the  we got our ans;
            if (j == m) return i;
        }
        return -1;
    }
};