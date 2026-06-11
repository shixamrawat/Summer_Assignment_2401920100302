class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string>st;
        int n=s.size();
        string curr="";
        int k=0;
        for(int i=0;i<n;i++){
            int ch=s[i];
            if(isdigit(ch)){
                k = k * 10 + (ch - '0');
            }
            else if(ch=='['){
                st.push(curr);
                num.push(k);
                k=0;
                curr="";
            }
            else if(ch==']'){
                int repeat = num.top();
                num.pop();
    
                string temp = "";
                while (repeat > 0) {
                    temp += curr;
                    repeat--;
                }
                curr = st.top() + temp; 
                st.pop();
            }
            else{
                curr+=ch;
            }
        }
        return curr;
    }
};