class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();

        int st = 0, end = n - 1;
        int lmax = 0, rmax = 0, total = 0;

        while (st < end) {
            if (h[st] < h[end]) {
                if (h[st] > lmax) {
                    lmax = h[st];
                } else {
                    total += lmax - h[st];
                }
                st++;
            } else {
                if (h[end] > rmax) {
                    rmax = h[end];
                } else {
                    total += rmax - h[end];
                }
                end--;
            }
        }

        return total;
    }
};