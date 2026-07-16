class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n,-1);
        vector<int>suf(n,0);
        vector<int>ans(n , -1);
        int premul = 1 , sufmul = 1;
        pre[0] = 1;
        for(int i = 1;i<n;i++){
            premul *= nums[i-1];
            pre[i] = premul;
        }
        suf[n-1] = 1;
        for(int i = n-2;i>=0;i--){
            sufmul *= nums[i+1];
            suf[i] = sufmul;
        }
        for(int i = 0;i<n;i++){
            int fnl = pre[i] * suf[i];
            ans[i] = fnl;
        }
    return ans;
    }
};