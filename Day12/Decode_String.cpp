class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        stack<int> count;
        string current_string="";
        int k=0;
        int i=0;
        for(char ch:s){
            if(isdigit(ch)){
                k=k*10+(ch-'0');
            }
            else if(ch=='['){
                count.push(k);
                st.push(current_string);
                k=0;
                current_string="";
            }
            else if(ch==']'){
                string decode_string=st.top();
                st.pop();
                int num=count.top();
                count.pop();
                for(int j=1;j<=num;j++){
                    decode_string+=current_string;
                }
                current_string=decode_string;
            }
            else{
                current_string+=ch;
            }
            i++;
        }
        return current_string;
        
        

    }
};