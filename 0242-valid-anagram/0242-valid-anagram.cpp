class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.length();
        int l2 = t.length();
        if(l1 != l2) return false;

        vector<int>freq(256 , 0);
       
        for(int i =0;i<l1;i++){
            freq[(int)s[i]]++;
            freq[(int)t[i]]--;
        }
        for(int i = 0;i<256;i++){
            if(freq[i] != 0){
                return false;
            }
        }
        return true;

    }
};