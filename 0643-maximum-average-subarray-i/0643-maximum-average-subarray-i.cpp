class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int st = 0 , end = k-1;
        double sum = 0;
        for(int i = 0;i<k;i++){
            sum += nums[i];
        }
        double maxavg = sum / k;
       
        for(int i = k;i<n;i++){
            sum += nums[i] - nums[i-k];
            maxavg = max(maxavg , sum/k);
        }
        return maxavg;
    }
};