class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>leftbig(n);
        vector<int>rightbig(n);
        int water = 0;
        leftbig[0] = 0;
        for(int i = 1;i<n;i++){
            int big = max(height[i-1] , leftbig[i-1]);
            leftbig[i] = big;
        }
        rightbig[n-1] = 0;
        for(int i = n-2;i>=0;i--){
            int big = max(height[i+1] , rightbig[i+1]);
            rightbig[i] = big;
        }
        for(int i = 0;i<n;i++){
            int small = min(leftbig[i] , rightbig[i]);
            if(small > height[i]){
                water += (small-height[i]);
            }else{
                small = 0;
            }
        }
        return water;
    }
};