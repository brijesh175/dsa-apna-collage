class Solution {
public:
    string add(string num1, string num2) {
        int sum = 0;
        string ans;
        int carry = 0;
        int idx1 = num1.length() - 1, idx2 = num2.length()-1;
        while (idx2 >= 0) {
            sum = (num1[idx1] - '0') + (num2[idx2] - '0') + carry;
            carry = sum / 10;
            char c = '0' + sum % 10;
            ans += c;
            idx1--;
            idx2--;
        }
        while(idx1 >= 0){
            sum = (num1[idx1] - '0') +  carry;
            carry = sum/10;
            char c = '0' + sum%10;
            ans += c;
            idx1--;
        }
        if(carry){
            ans += '1';
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }

    string addStrings(string num1, string num2) {

        if(num1.size() > num2.size()){
            return add(num1,num2);
        }else{
            return add(num2,num1);
        }
    }
};