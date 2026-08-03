class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = s.length();
        int st = 0 , end = 0;
        int maxlen = 0;
        unordered_set<char>m;

        while(end < l){
            while(m.count(s[end])){
                m.erase(s[st]);
                st++;
            }
            m.insert(s[end]);
            int len = end-st+1;
            maxlen = max(maxlen , len);
            end++;
        }
        return maxlen;
    }
};