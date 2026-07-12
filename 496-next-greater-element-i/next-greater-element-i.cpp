class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        vector<int> ans(m, -1);
        for (int i = 0; i < m; i++) {
            int j;
            for (j = 0; j < n; j++) {
                if (nums2[j] == nums1[i]) {
                    break;
                }
            }
            for (int k = j + 1; k < n; k++) {
                if (nums2[k] > nums1[i]) {
                    ans[i] = nums2[k];
                    break;
                }
            }
        }

        return ans;
    }
};