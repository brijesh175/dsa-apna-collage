class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        int sq =n*n; 
        vector<vector<int>> mat(n, vector<int>(n, 0));
        int row = mat.size();
        int col = mat[0].size();
        int count = 0;
        int sr = 0,sc = 0,er = row-1,ec = col-1;
        int st = 1;
        
        while(count < sq){
            
            // for first row
            for(int i = sc; count < sq && i<=ec;i++){
                mat[sr][i] = st;
                st++;
                count++;
            }
            sr++;
            // for last col
            for(int i = sr; count < sq && i<=er;i++){
                mat[i][ec] = st;
                st++;
                count++;
            }
            ec--;
            // for last row
            for(int i = ec; count < sq && i>=sc;i--){
                mat[er][i] = st;
                st++;
                count++;
            }

            er--;
            // for first col
            for(int i = er ; count < sq && i>=sr;i--){
                mat[i][sc] = st;
                st++;
                count++;
            }
            sc++;
        }
        return mat;
    }   

    
};