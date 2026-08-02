class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        vector<int>maxl(n);
        vector<int>maxr(n);
        maxl[0] = h[0];
        for(int i = 1;i< n-1;i++){
            maxl[i] = max(maxl[i-1] , h[i]);
        }
        maxr[n-1] = h[n-1];
        for(int i = n-2;i>=0;i--){
            maxr[i] = max(maxr[i+1] , h[i]);
        }
        int total = 0;
        for(int i = 0;i< n;i++){
            total +=  max(0, min(maxl[i] , maxr[i]) - h[i]);
        }
        return total;

    }
};  