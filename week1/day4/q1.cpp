class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        //size of matrix
        int n=mat.size();
        for(int i=0;i<n;i++){
            //sum of primary diagonal element
            sum+=mat[i][i];
            //sum of secondary digonal element
            sum+=mat[i][n-i-1];
        }
        //if n is odd then the middle value get added twice
        if(n%2==1){
            sum-=mat[n/2][n/2];
        }
        return sum;
        
    }
};