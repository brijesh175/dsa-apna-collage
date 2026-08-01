class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;

        for (int i = n - 1; i >= 2; i--) {
            int st = 0, end = i - 1;

            while (st < end) {
                if (nums[i] < nums[st] + nums[end]) {
                    count += end - st;
                    end--;
                }else{
                    st++;
                }
                
                
            }
        }return count;
    }
};