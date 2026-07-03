class Solution {
  public:
  
    void solve(int index, int sum, vector<int> &arr, vector<int> &ans) {
        
        // Base Case
        if (index == arr.size()) {
            ans.push_back(sum);
            return;
        }
        
        // Include current element
        solve(index + 1, sum + arr[index], arr, ans);
        
        // Exclude current element
        solve(index + 1, sum, arr, ans);
    }
  
    vector<int> subsetSums(vector<int>& arr) {
        
        vector<int> ans;
        
        solve(0, 0, arr, ans);
        
        return ans;
    }
};