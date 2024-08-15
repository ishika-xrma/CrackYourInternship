class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>nge(n2);
        nge=NGE(nums2);
        unordered_map<int, int> ngeMap;
        for (int i = 0; i < nums2.size(); ++i) {
            ngeMap[nums2[i]] = nge[i];
        }
        for (int i = 0; i < nums1.size(); ++i) {
            nums1[i] = ngeMap[nums1[i]];
        }
        return nums1;
    }
    vector<int> NGE(vector<int>nums){
        int n=nums.size();
        stack<int>s;
        vector<int>nge(n);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums[i]){
                s.pop();
            }
            if(s.empty()){
                nge[i]=-1;
            }
            else{
                nge[i]=s.top();
            }
            s.push(nums[i]);
        }
        return nge;
        
    }
};