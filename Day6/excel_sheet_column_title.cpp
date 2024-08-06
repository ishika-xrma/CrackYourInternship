class Solution {
public:
    string convertToTitle(int col) {
        string s="";
        while(col){
            col--;
            int digit=col%26+65;
            s=(char)(digit)+s;
            col/=26;
        }
        return s;
        
    }
};