class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        if(n*m!=r*c){
            return mat;
        }
        vector<vector<int>>ans(r,vector<int>(c));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int k=i*m+j;
                int a=k/c;
                int b=k%c;
                ans[a][b]=mat[i][j];
            }
        }
        return ans;
    }
};