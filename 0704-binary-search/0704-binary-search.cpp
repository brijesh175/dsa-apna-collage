class Solution {
public:
    int s(vector<int>& nums, int st, int end, int tar) {
        if (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == tar)
                return mid;
            else if (nums[mid] > tar) {
                return s(nums, st, mid - 1, tar);
            } else {
                return s(nums, mid + 1, end, tar);
            }
        }
        return -1;
    }

    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int st = 0,end = n-1;
        return s(arr , st,end,target);
    }
}
;
