class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        
        int row = mat.size();
        int col = mat[0].size();

        int fr = 0;
        int fc = 0;
        int lr = row-1;
        int lc = col-1;
        int total = row*col;
        int count = 0;

        while(count < total){
            // for first row
            for(int i = fc;i<=lc;i++){
                ans.push_back(mat[fr][i]);
                count++;
            }
            fr++;

            // for  last col
            for(int i = fr; count < total && i<=lr;i++){
                ans.push_back(mat[i][lc]);
                count++;
            }
            lc--;

            // for last row
            for(int i = lc;count < total && i>=fc;i--){
                ans.push_back(mat[lr][i]);
                count++;
            }
            lr--;

            // for first col
            for(int i = lr; count < total && i>=fr;i--){
                ans.push_back(mat[i][fc]);
                count++;
            }
            fc++;


        }
        return ans;

         
    }
};