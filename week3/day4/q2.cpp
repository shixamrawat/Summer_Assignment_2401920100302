class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            int first;
            int second;
            string ch=tokens[i];
            if(ch[0]=='+'){
                second=st.top();
                st.pop();
                first=st.top();
                st.pop();
                st.push(first+second);
            }
            else if(ch[0]=='-' && ch.size()==1){
                second=st.top();
                st.pop();
                first=st.top();
                st.pop();
                st.push(first-second);
            }
            else if(ch[0]=='*'){
                second=st.top();
                st.pop();
                first=st.top();
                st.pop();
                st.push(first*second);
            }
            else if(ch[0]=='/'){
                second=st.top();
                st.pop();
                first=st.top();
                st.pop();
                st.push(first/second);
            }
            else{
                st.push(stoi(ch));
            }

        }
        return st.top();
    }
};