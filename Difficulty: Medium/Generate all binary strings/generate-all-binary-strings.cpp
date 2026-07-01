class Solution {
  public:
  void GenerateBS(int n, string curr, vector<string> & ans){
      if(curr.length() == n){
          ans.push_back(curr);
          return;
      }
      GenerateBS(n,curr + "0" ,ans);
      GenerateBS(n,curr + "1" ,ans);
      
  }
    vector<string> binstr(int n) {
        // code here
        vector<string> ans;
        GenerateBS(n,"",ans);
        return ans;
    }
};