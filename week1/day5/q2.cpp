class Solution {
public:
    void reverseString(vector<char>& s) {
        //we need to reverse so we take one element from first and one from last and wap them
        // 2 pointer approach
        int left=0;
        int right=s.size()-1;
        char temp;
        while(left<right){
            temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
    }
};