class Solution {
public:
    bool validPalindrome(string s) {
        if(s.size()<=2){
            return true;
        }
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return (Palindrome(s,i+1,j)||Palindrome(s,i,j-1));
            }
            i++;
            j--;
        }
        return true;

    }
     bool Palindrome(string s,int left, int right) {
        int n=s.size();
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};