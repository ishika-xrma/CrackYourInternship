class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int m=s.size();
        int n=t.size();
        int i=0,j=0;
        stack<int>StackS;
        stack<int>StackT;
        while(i<m){
            if(s[i]=='#'){
                if(!StackS.empty()){
                    StackS.pop();
                }
            }
            else{
                StackS.push(s[i]);
            }
            i++;
        }
        while(j<n){
            if(t[j]=='#'){
                if(!StackT.empty()){
                    StackT.pop();
                }
            }
            else{
                StackT.push(t[j]);
            }
            j++;
        }
        while(!StackS.empty() && !StackT.empty()){
            if(StackS.top()!=StackT.top()){
                return false;
            }
            StackS.pop();
            StackT.pop();
        }
    return StackS.empty() && StackT.empty();

    }
};