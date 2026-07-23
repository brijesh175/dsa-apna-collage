class Solution {
public:
    vector<int> sortedSquares(vector<int>& x) {
        int n = x.size();
        vector<int>ans(n);
        int i = 0,j=n-1;
        int k = n-1;

        while(i <= j){
            if(abs(x[i]) < abs(x[j])){
                ans[k--] = x[j]*x[j];
                j--;
            }else{
                ans[k--] = x[i]*x[i];
                i++;
            }
        }
        return ans;
    }
};