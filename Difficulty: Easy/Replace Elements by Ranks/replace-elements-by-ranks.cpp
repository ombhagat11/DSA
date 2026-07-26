class Solution {
  public:
    void replaceWithRank(vector<int>& arr) {
        int n = arr.size();
        
        vector<pair<int, int>> v;
        
        // Store value and its original index
        for (int i = 0; i < n; i++) {
            v.push_back({arr[i], i});
        }
        
        // Sort by value, then by original index
        sort(v.begin(), v.end());
        
        // Assign ranks
        for (int rank = 0; rank < n; rank++) {
            arr[v[rank].second] = rank;
        }
    }
};