class Solution {
public:
    bool isPalindrome(int n) {
        int copyN = n;
        int revnum = 0;
        if(n<0){
            return false;
        }
        while(n != 0){
            int digit = n%10;
            if(revnum > INT_MAX/10 || revnum <INT_MIN/10){
                return false;
            }
            revnum = (revnum*10) + digit;
            n = n/10;
        }
        if(copyN == revnum){
            return true;
        }else{
            return false;
        }
    }
};