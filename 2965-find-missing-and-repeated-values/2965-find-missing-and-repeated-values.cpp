class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int>s;
        vector<int>ans;
        int n = grid.size();
        int a,b;
        int as = 0,exps = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                as += grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    a = grid[i][j];
                    ans.push_back(a); 
                }
                s.insert(grid[i][j]);
            }
        }

        exps = (n*n) * (n*n + 1)/2;
        b = exps + a - as;

        ans.push_back(b);
        return ans;
        

    }
};