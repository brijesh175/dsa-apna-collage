class Solution {
public:
    int countPrimes(int n) {
        vector<bool>isp(n+1,1);
        int count = 0;
        if(n == 0||n==1||n==2){
            return 0;
        }
        for(int i = 2;i<n;i++){
            if(isp[i]){
                count++;
            
            }
            for(int j = i*2;j<n;j = j+i){
                isp[j] = 0;
            }
        }
        return count;
    }
}; 