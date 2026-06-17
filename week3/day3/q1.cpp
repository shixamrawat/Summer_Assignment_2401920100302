class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch : s){
            // opening brackets
            if(ch=='(' || ch=='[' || ch=='{' ){
                st.push(ch);
            }
            // for closing brackets
            else{
                // closing bracket but no opening bracke present
                if(st.empty()){
                    return false;
                }
                char top=st.top();
                if((top=='(' && ch ==')')||
                    (top=='[' && ch ==']')||
                    (top=='{' && ch =='}')){
                    st.pop();
                }
                else{
                    return false;
                }
                
            }

        }
        return st.empty();// if empty return true opening and closing bracket canceled each other
    }
};