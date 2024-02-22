class Solution {
public:
    bool is_present(string haystack,string needle,int index){
        for(int i=0;i<needle.size();i++){
            if(index+i>=haystack.size() || haystack[index+i]!=needle[i]){
                return false;
                break;
            }
            
        }
        return true;
    }
    int strStr(string haystack, string needle) {
        int l1=haystack.size();
        int l2=needle.size();
        if(l1==1 && l2==1 && haystack[0]==needle[0]){
            return 0;
        }
        else{
        vector<int>v;
        int index=-1;
        for(int i=0;i<l1;i++){
            
            if(haystack[i]==needle[0]){
                index=i;
                if( is_present(haystack,needle,index)){
                v.push_back(i);}
                
            }
        }
        if(!v.empty()){
            return v[0];
        }
        else{
              return -1;
        }
    }
    }
  
};