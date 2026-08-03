class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int st = 0 , end = 0;
        int minlen = INT_MAX;
        int sum = 0;
        int sumi = 0;
        for(int i = 0;i<n;i++){
            sumi += nums[i];
        }
            if(sumi < target){
                return 0;
            }
        while(end < n){
            sum += nums[end];
            while(sum >= target){
                minlen = min(minlen , end-st+1);
                sum -= nums[st++];
            }
            end++;
        }
        
        
        
        return minlen;
    }
};