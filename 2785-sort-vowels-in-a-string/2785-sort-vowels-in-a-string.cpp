class Solution {
public:
    string sortVowels(string s) {
        vector<int> uper(26, 0);
        vector<int> lower(26, 0);
        string ans;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {

                lower[s[i] - 'a']++;
                s[i] = '#';
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U') {

                uper[s[i] - 'A']++;
                s[i] = '#';
            }
        }
        for (int i = 0; i < 26; i++) {
            char ch = 'A' + i;
            while (uper[i]) {
                ans += ch;
                uper[i]--;
            }
        }

        for (int i = 0; i < 26; i++) {
            char ch = 'a' + i;
            while (lower[i]) {
                ans += ch;
                lower[i]--;
            }
        }

        int ft = 0,sec = 0;
        while(sec < ans.length()){
            if(s[ft] == '#'){
                s[ft] = ans[sec];
                sec++;
            }
            ft++;
        }
        return s;
    }
};