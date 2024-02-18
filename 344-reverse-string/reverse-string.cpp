class Solution {
    
public:
    void reverseString(vector<char>& s) {
        int length=s.size();
        int end=length-1;
        int start=0;
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        
    }
};