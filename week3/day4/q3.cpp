class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // int n=heights.size();
        // vector<int> nsl(n); //next smallest left
        // vector<int> nsr(n); //next smallest right
        // stack<int> s;

        // // next smallest left 
        // nsl[0]=-1;
        // s.push(0);
        // for(int i=1;i<n;i++){
        //     int curr=heights[i];
        //     while(!s.empty() && curr<=heights[s.top()]){
        //         s.pop();
        //     }
        //     if(s.empty()){
        //         nsl[i]=-1;
        //     }
        //     else{
        //         nsl[i]=s.top();
        //     }
        //     s.push(i);
        // }

        // //clearing the stack
        // while(!s.empty()){
        //     s.pop();
        // }

        // //next smallest right

        // nsr[n-1]=n;
        // s.push(n-1);
        // for(int i=n-2;i>=0;i--){
        //     int curr=heights[i];
        //     while(!s.empty() && curr<=heights[s.top()]){
        //         s.pop();
        //     }
        //     if(s.empty()){
        //         nsr[i]=n;
        //     }
        //     else{
        //         nsr[i]=s.top();
        //     }
        //     s.push(i);
        // }

        // int maxarea=0;
        // for(int i=0;i<n;i++){
        //     int ht=heights[i];
        //     int wd= nsr[i]-nsl[i]-1;
        //     int currarea=ht*wd;
             
        //     maxarea=max(currarea,maxarea); 
        // }
        // return maxarea;

        stack<int> st;
        int maxarea=0;
        int n=heights.size();

        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || heights[st.top()]>=heights[i])){
                int height=heights[st.top()];//get the height of curr bar
                st.pop();   //remove the top bar
                int width;
                if(st.empty()){
                    width=i;    //all elements were higher than current
                }
                else{
                    width=i-st.top()-1;// btw current idx and top
                }
                maxarea=max(maxarea,height*width);
            }
            st.push(i);//add idx to stack
        }
        return maxarea; 
    }
};