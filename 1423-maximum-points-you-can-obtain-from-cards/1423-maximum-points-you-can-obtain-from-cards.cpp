class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int lsum = 0 , rsum = 0;
        for(int i = 0;i<k;i++){
            lsum += nums[i];
        }
        int maxsum = lsum;
        int idx = n-1;
        for(int i = k-1;i>=0;i--){
            rsum += nums[idx--];
            lsum -= nums[i];    
            maxsum = max(maxsum , rsum+lsum);
        }
        return maxsum;
    
    }
};