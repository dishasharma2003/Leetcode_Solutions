class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=0;int j=0;
      reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int carry=0;
        
        int length = max(a.size(), b.size());
        while (i < length || carry) {
            int digitA = (i < a.size()) ? (a[i] - '0') : 0;
            int digitB = (i < b.size()) ? (b[i] - '0') : 0;
            int total = digitA + digitB + carry;
            ans.push_back(total % 2 + '0');
            carry = total / 2;
            i++;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};