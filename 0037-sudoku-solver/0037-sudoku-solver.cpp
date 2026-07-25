class Solution {
public:
    bool isvalid(vector<vector<char>>& board, int row, int col, char dig) {
        // check for row
        for (int i = 0; i <9; i++) {
            if (board[row][i] == dig)
                return false;
        }
        // check for col
        for (int i = 0; i <9; i++) {
            if (board[i][col] == dig) return false;
        }
        // ckeck for digonal
        int srow = (row / 3) * 3;
        int scol = (col / 3) * 3;
        for (int i = srow; i <= srow + 2; i++) {
            for (int j = scol; j <= scol + 2; j++) {
                if (board[i][j] == dig)
                    return false;
            }
        }
        return true;
    }

    bool ss(vector<vector<char>>& board,int row,int col) {

        if (row == 9) {
            return true;
        }
        int nextrow = row, nextcol = col + 1; // next roe/col
        if (nextcol == 9) {
            nextrow = row + 1;
            nextcol = 0;
        }
        // check for if alredy any digit exit
        if(board[row][col] != '.') return ss(board , nextrow , nextcol);
        // next roe/col
        for (char dig = '1'; dig <= '9'; dig++) {
            if (isvalid(board, row, col, dig)) {
                board[row][col] = dig;
                if (ss(board, nextrow, nextcol)) {
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        ss(board , 0 ,0);
    }
};