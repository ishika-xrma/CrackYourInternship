class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n=nums.size();
        stack<int>s;
        vector<int>nge(n,0);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && nums[s.top()]<=nums[i]){
                s.pop();
            }
            if(!s.empty()){
                nge[i]=s.top()-i;
            }
            s.push(i);
        }
        return nge;
    }
};