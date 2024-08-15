class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        int n=s.size();
        int num=0;
        char op='+';
        for(int i=0;i<n;i++){
            char c=s[i];
            if(isdigit(c)){
                num=(num*10)+(c-'0');
            }
            if(!isdigit(c) && c!=' ' ||i==n-1){
                if(op=='+'){
                    st.push(num);
                }
                else if(op=='-'){
                    st.push(-num);
                }
                else if(op=='*'){
                    int num1=st.top();
                    st.pop();
                    st.push(num1*num);
                }
                else if(op=='/'){
                    int num1=st.top();
                    st.pop();
                    st.push(num1/num);
                }
                op=c;
                num=0;
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};