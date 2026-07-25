class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;

        nqueen(ans, board, 0, n);
        return ans;
    }

    bool isvalid(vector<string>& board, int n, int row, int col) {

        // horizontal check
        for (int i = 0; i < n; i++) {
            if (board[row][i] == 'Q')
                return false;
        }
        // vertical check
        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q')
                return false;
        }
        // for left digonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q')
                return false;
        }
        // for right dignl
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q')
                return false;
        }
        return true;
    }

    void nqueen(vector<vector<string>>& ans, vector<string>& board, int row,
                int n) {

        if (n == row) {
            ans.push_back(board);
            return;
        }
        for (int col = 0; col < n; col++) {
            if (isvalid(board, n, row, col)) {
                board[row][col] = 'Q';          //  for curent row
                nqueen(ans, board, row + 1, n); // fun call back for next row
                board[row][col] = '.';          // backtraking...
            }
        }
    }
};