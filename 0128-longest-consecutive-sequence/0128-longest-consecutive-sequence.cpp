class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin() ,nums.end());
        int n = nums.size();
        int len = 1 , maxlen = 1;
        if(n == 0){
            return 0;
        }
        for(int i = 1;i<n;i++){
            if(nums[i] == nums[i-1] +1){
                len++;
            }else if(nums[i] != nums[i-1]){
                len = 1;
            }
            maxlen = max(maxlen , len);
        }
        return maxlen;
    }
};