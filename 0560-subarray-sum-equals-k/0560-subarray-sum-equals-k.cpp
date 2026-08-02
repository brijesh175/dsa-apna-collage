class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int>m;
        int total = 0;
        int prefixSum = 0;
        m[0] = 1;
        for(int i = 0;i<nums.size();i++){
            prefixSum += nums[i];

            if(m.count(prefixSum - k)){
                total += m[prefixSum - k];
                m[prefixSum]++;
            }else{
                m[prefixSum]++;
            }
        }
        return total;
    }
};