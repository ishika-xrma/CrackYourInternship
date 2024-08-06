class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr, int n) {
        set<vector<int>> p;
        sort(arr.begin(), arr.end());
        do {
            p.insert(arr);
        } while (next_permutation(arr.begin(), arr.end()));

        vector<vector<int>> result(p.begin(), p.end());
        return result;
    }
};