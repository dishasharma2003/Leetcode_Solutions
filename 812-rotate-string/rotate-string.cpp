class Solution {
public:
bool check(string s,string goal,int l1,int l2,int index){
    for(int i=0;i<l2;i++){
        if(goal[i]!=s[index+i]){
            return false;
        }
    }
    return true;
}
    bool rotateString(string s, string goal) {
        int l1=s.size();
        int l2=goal.size();
        if(l1!=l2){
            return false;
        }
        else{
            s=s+s;
            l1=2*l1;
            int index=-1;
            for(int i=0;i<l1;i++){
                if(goal[0]==s[i]){
                    index=i;
                    if(check(s,goal,l1,l2,index)){
                        return true;
                        
                    };
                

                }
            }
        }
       return false;
        }
    };
