class Solution {
public:
    void cs(vector<int>& arr,int target,vector<vector<int>>&ans, vector<int>& cont,int idx){
        if(target == 0){
            ans.push_back(cont);
            return;
        }
        if(idx == arr.size() || target <0) return;

        cont.push_back(arr[idx]);
        cs(arr , target-arr[idx] , ans,cont,idx);
        cont.pop_back();
        cs(arr , target , ans , cont , idx+1);

    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>cont;
        cs(arr , target , ans , cont , 0);
        return ans;
    }
};