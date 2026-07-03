class Solution {
public:
    void findCombination(int index, int target, vector<int>& candidates,
                         vector<int>& ds, vector<vector<int>>& ans) {

        // Found a valid combination
        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {

            // Skip duplicates at the same recursion level
            if (i > index && candidates[i] == candidates[i - 1])
                continue;

            // Since array is sorted, no need to continue
            if (candidates[i] > target)
                break;

            ds.push_back(candidates[i]);

            // Move to next index because each element can be used only once
            findCombination(i + 1, target - candidates[i], candidates, ds, ans);

            ds.pop_back(); // Backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> ds;

        findCombination(0, target, candidates, ds, ans);

        return ans;
    }
};