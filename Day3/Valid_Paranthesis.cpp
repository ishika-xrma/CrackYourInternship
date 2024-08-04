class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        int i=0;
        while(str[i]!='\0'){
            if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
                s.push(str[i]);
                i++;
                continue;
            }
            if(str[i]==')'){
                if(s.empty()) return false;
                if(s.top()!='(') return false;
                s.pop();
            }
            else if(str[i]==']'){
                if(s.empty()) return false;
                if(s.top()!='[') return false;
                s.pop();
            }
            else if(str[i]=='}'){
                if(s.empty()) return false;
                if(s.top()!='{') return false;
                s.pop();
            }
            i++;
            
        }
        return s.empty();
    }
};