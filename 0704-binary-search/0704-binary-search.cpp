class Solution {
public:

    int bsearch(vector<int>&nums , int st ,int end , int tar){
        // int n = nums.size();
        // int st = 0 , end = n-1;
        if(st > end) return -1;
        int mid = st + (end-st)/2;
        if(nums[mid] == tar){
            return mid;
        }

        if(nums[mid] > tar){
            return bsearch(nums , st , mid-1 , tar);
        }
        else{
           return bsearch(nums , mid+1 , end, tar);
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        return bsearch(nums , st,end,target);
        
    }
};