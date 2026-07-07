class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>count(256,0);
        int st = 0,end = 0;
        int len = 0;
        while(end < s.length()){

            while(count[s[end]]){

                count[s[st]] = 0;
                st++;

            }

            count[s[end]] = 1;
            len = max(len, end-st+1);
            end++;
        }
        return len;
    }
};