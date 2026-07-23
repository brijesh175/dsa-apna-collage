class Solution {
public:


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allsubsets;
        vector<int>ans;
        bt( 0 , nums , ans , allsubsets);

        return allsubsets;
    }

    void bt(int i, vector<int>& nums , vector<int>&ans ,vector<vector<int>>&allsubsets ){
        if(i == nums.size()){
            allsubsets.push_back({ans});
            return;
        }
        ans.push_back(nums[i]); // add element
        bt(i+1,nums,ans ,allsubsets);       // all include case

        ans.pop_back();         // backtraking
        bt(i+1,nums,ans, allsubsets );       // all exclude case


    }
};