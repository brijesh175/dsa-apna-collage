class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        int row = mat.size();
        int col = mat[0].size();

        int ri = 0;
        int ci = col-1;

        while(ri < row && ci >=0){
            if(target == mat[ri][ci]){
                return 1;
            }
            else if(target < mat[ri][ci]){
                ci--;
            }else{
                ri++;
            }
        }
        return 0;



    }
};