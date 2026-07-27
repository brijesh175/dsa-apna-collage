class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int st = 0 ; 
        int end = 1;
        int count = 1;
        int idx = 0;
        while(end < n){
            if(nums[end-1] == nums[end]){
                end++;
            }else{
                nums[st+1] = nums[end];
                count++;
                st++;
                end++;
            }
            

        }
        return count;

    }
};