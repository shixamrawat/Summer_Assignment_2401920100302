    class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int m = matrix.size();          // number of rows
            int n = matrix[0].size();       // number of columns
            int srow=0,scol=0;
            int erow=m-1,ecol=n-1;
            vector<int> ans;
            while(srow<=erow && scol<=ecol){
                //for top row
                for(int j=scol;j<=ecol;j++){
                    ans.push_back(matrix[srow][j]);
                }
                //for right column
                for(int i=srow+1;i<=erow;i++){
                    ans.push_back(matrix[i][ecol]); 
                }
                //for bottom row
                for(int j=ecol-1;j>=scol;j--){
                    if(srow==erow){
                        //already printed in top 
                        break;
                    }
                    ans.push_back(matrix[erow][j]);
                }
                //for left column
                for(int i=erow-1;i>=srow+1;i--){
                    if(ecol==scol){
                        //alr printed in right
                        break;
                    }
                    ans.push_back(matrix[i][scol]);
                }
                srow++,scol++;
                erow--,ecol--;
            }
            return ans;
        }
    };