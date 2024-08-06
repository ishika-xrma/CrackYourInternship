class Solution {
public:
    string removeDuplicates(string str, int k) {
        stack<pair<char,int>> s;
        int i=0;
        while(str[i]!='\0'){
            if(s.empty() || s.top().first!=str[i]){
                s.push({str[i],1});
            }
            else{
                if(s.top().second==k-1){
                    s.pop();
                }
                else{
                    s.top().second++;
                }

            }
            i++;
        }
        string result;
        while(!s.empty()){
            result.insert(result.begin(), s.top().second, s.top().first);
            s.pop();
        }
        return result;
    }
};