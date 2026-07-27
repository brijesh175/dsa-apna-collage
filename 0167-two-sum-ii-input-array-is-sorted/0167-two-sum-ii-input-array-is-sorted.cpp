class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int>ans;
        int n = arr.size();
        int st = 0 , end = n-1;

       while(st <= end){
            if(arr[st] + arr[end] == target){
                ans.push_back(st+1);
                ans.push_back(end+1);
                return ans;
            }
            if(arr[st] + arr[end] < target){
                st++;
            }
            else{
                end--;
            }
       }
       return ans;
    }
};