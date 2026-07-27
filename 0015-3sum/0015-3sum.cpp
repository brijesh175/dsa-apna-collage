class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<vector<int>>ans;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int k = n-1;
            int j = i+1;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0){
                    j++;
                }else if(sum > 0){
                    k--;
                }else{
                    vector<int>temp = {nums[i] , nums[j] , nums[k]};
                    ans.push_back(temp);
                    while(j < k && nums[j] == nums[j+1]) j++;
                    while(j < k && nums[k] == nums[k-1]) k--;
                    k--;
                    j++;
                }

            }
            
        }
        return ans;
        
    }
};