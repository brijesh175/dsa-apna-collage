class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<bool>count(256 , 0);
        int st = 0,end = 0,len = 0;
        while(end < n){
            while(count[s[end]]){
                count[s[st]] = 0;
                st++;
            }
            len = max(len , end-st+1);
            count[s[end]] = 1;
            end++;
        }
        return len;
    }
};